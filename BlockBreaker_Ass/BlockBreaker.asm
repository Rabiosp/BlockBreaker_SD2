.data
	dirVGA:		.word 	0xFFFFA000
	dir7seg:	.word 	0xFFFFE000
	dirLEDS:	.word 	0xFFFF8000
	dirEntradas:	.word 	0xFFFFD000
	dirMillis:	.word 	0xFFFFB000
	platform:	.word	0x0003F000 ## 0x100100014
	
.text
	jal data

	# Se carga en el 7 seg
	addi	$t0, $zero, 123
	lw	$t1,dir7seg
	sw	$t0, 0($t1)
	# Se carga en los LEDs
	addi 	$t0, $zero, 0x1111
	lw 	$t1,dirLEDS
	sw 	$t0, 0($t1)
	## Se imprime la primera pantalla de VGA con la plataforma
	lw	$t0, platform
	lw 	$t1, dirVGA
	sw 	$t0, 92($t1) ## 92($t1) es la direccion de la ultima linea de la pantalla
	


check_keypress:
	lw	$t9, dirEntradas
	lw	$t9, ($t9)
	## SW_1	
	andi	$t8, $t9, 1
	bne	$t8, $zero, move_left
	## SW_2
	andi	$t8, $t9, 2
	bne	$t8, $zero, move_right
	
	## SW_n
	#andi	$t8, $t9, 0x0000
	#bne	$t8, $zero, move_right
	
	
	j	gameUpdateLoop
	
gameUpdateLoop:
	## Leer la entrada y mover la plataforma accordingly
	## Se actualiza las posiciones
	## 92($t1) es la direccion de la ultima linea de la pantalla
	
	## Sleep()
	lw 	$t1,dirMillis
	sw 	$t0, 0($t1)	##Se escribe algo en el millis para resetear la cuenta
	addi 	$s0, $zero, 100
	sleep:
	lw 	$t0, 0($t1)	##Se lee el valor del contador de millis
	bne 	$t0, $s0,sleep	##Se espera hasta que los millis sean 1 segundo
	sw 	$t0, 0($t1)	##Se escribe algo en el millis para resetear la cuenta
	
	jal	updatePlatform
	j	check_keypress
	
updatePlatform:
	lw	$t0, platform
	lw 	$t1, dirVGA
	sw 	$t0, 92($t1)
	jr	$ra


move_left:
	lw	$t0, platform
	beq	$t0, 0xfc000000, gameUpdateLoop	
	sll	$t1, $t0, 1	
	sw	$t1, platform
	j	gameUpdateLoop
	

move_right:
	lw	$t0, platform
	beq	$t0, 0x0000003f, gameUpdateLoop	
	srl	$t1, $t0, 1	
	sw	$t1, platform
	j	gameUpdateLoop
		
data:
	##Segmento donde se cargan las constantes a la memoria
	lui	$t0, 0x1001
	ori 	$t0, $t0, 0x0000 ##primera direccion en la memoria de .data
	# dirVGA:		.word 0xFFFFA000
	lui 	$t1, 0xFFFF
	ori 	$t1, $t1, 0xA000 
	sw 	$t1, 0($t0)
	
	# dir7seg:	.word 0xFFFFE000
	addi	$t0,$t0,4
	lui	$t1,0xFFFF
	ori 	$t1, $t1, 0xE000 
	sw 	$t1,0($t0)
	
	# dirLEDS:	.word 0xFFFF8000
	addi 	$t0,$t0,4
	lui 	$t1,0xFFFF
	ori 	$t1, $t1, 0x8000 
	sw 	$t1,0($t0)
	
	# dirEntradas:	.word 0xFFFFD000
	addi 	$t0,$t0,4
	lui 	$t1,0xFFFF
	ori 	$t1, $t1, 0xD000 
	sw 	$t1,0($t0)
	
	# dirMillis:	.word 0xFFFFB000
	addi 	$t0,$t0,4
	lui 	$t1,0xFFFF
	ori 	$t1, $t1, 0xB000 
	sw 	$t1,0($t0)
	
	# platform:	.word	0x0001E000
	addi 	$t0,$t0,4
	lui 	$t1,0x0003
	ori 	$t1, $t1, 0xF000 
	sw 	$t1,0($t0)

	jr	$ra
