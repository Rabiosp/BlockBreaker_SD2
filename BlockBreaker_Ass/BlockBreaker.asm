.data
	dirVGA:		.word 	0xFFFFA000
	dir7seg:	.word 	0xFFFFE000
	dirLEDS:	.word 	0xFFFF8000
	dirEntradas:	.word 	0xFFFFD000
	dirMillis:	.word 	0xFFFFB000
	platform:	.word	0x0000F000
	
.text
	jal data

	#Se carga en el 7 seg
	addi	$t0, $zero, 169
	lw	$t1,dir7seg
	sw	$t0, 0($t1)
	#Se carga en los LEDs
	addi 	$t0, $zero, 0x00A7
	lw 	$t1,dirLEDS
	sw 	$t0, 0($t1)
	
	##Se imprime la primera pantalla de VGA
	addi	$t0, $zero, 1
	lw 	$t1,dirVGA
	addi 	$t2,$zero,25
	
	
	
	
	
data:
	##Segmento donde se cargan las constantes a la memoria
	lui	$t0,0x1001
	ori 	$t0, $t0, 0x0000 ##primera direccion en la memoria de .data
	# dirVGA:		.word 0xFFFFA000
	lui 	$t1,0xFFFF
	ori 	$t1, $t1, 0xA000 
	sw 	$t1,0($t0)
	
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
	
	# platform:	.word	0x0000F000
	addi 	$t0,$t0,4
	lui 	$t1,0x0000
	ori 	$t1, $t1, 0xF000 
	sw 	$t1,0($t0)

	jr	$ra
