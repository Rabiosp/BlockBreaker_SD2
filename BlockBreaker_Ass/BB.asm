# Author: Mathias Barrios
# Date: 12 OCT 2022
# Purpose: Block Breaker Game

## 0xffffa000: displayAdress
## El dato que envio debe ser: hex de 8 digitos para cada pixel 1 o 0
## 
.data 

frameBuffer:	.word	0xffffa000
xPos:		.word	0
yPos:		.word	0
xConversion:	.word	64 ## need?
yConversion:	.word	4  ## need?
ballY: 		.word	1
VelX		.word	
VelY		.word
platform:	.word	0x0000f000


.text
### DRAW BACKGROUND
	la	$t0, frameBuffer
	li	$t1, 8192		##512*256 ???
	li	$t2, 0x00C8C8FF		##Background Color: 0xAARRGGBB donde AA no importa 00 por defecto
					## https://www.rapidtables.com/convert/color/rgb-to-hex.html
loop1:
	sw	$t2, 0($t0)
	addi	$t0, $t0, 4		##siguiente pixel en pantalla
	addi	$t1, $t1, -1		##-1 q pixel y repetimos hasta que ya no queden
	bnez	$t1, loop1
	
	
### GAME UPDATE PSEUDO-CODE ###
# input = user input()
# if input == spacebar (start();)
# if input == d (moveRight();)
# if input == a (moveLeft();)

## Sub Functions
# moveDirection(){
#	dir = direction of platform
#	updatePlatform(dir)
#	updatePlatformPosition()
# }
# Registers:
# $t3: key press input
# $s3: direction of platform

	
gameUpdateLoop:
	lw	$t3, 0xffff0004		# get keypress from keyboard
	
	## 66ms gives 15fps
	addi	$v0, $zero, 32	# sleep
	addi	$a0, $zero, 66	#66 ms
	syscall
	
	beq	$t3, 97, moveLeft	#codigo de "a"
	beq	$t3, 100, moveRight	#codigo de "d"
	
	
moveLeft:
	lw	$s3, platformLeft # $s3: direction of platform
	add	$a0, $s3, $zero	  # $a0: direction of platform
	jal	updatePlatform
	#move platform
	jal	updatePlatformPosition
	j	exitMoving
	
moveRight:
	lw	$s3, platformRight # $s3: direction of platform
	add	$a0, $s3, $zero	  # $a0: direction of platform
	jal	updatePlatform
	#move platform
	jal	updatePlatformPosition
	j	exitMoving
	
	
updatePlatform:
	addiu	$sp, $sp, -24
	sw	$fp, 0($sp)
	sw	$ra, 4($sp)
	addiu	$fp, $sp, 20
	
	### Draw Platform - No need to update yPos
	lw	$t0, xPos		# t0: xPos of platform
	lw	$t1, yPos		# t1: yPos of platform
	lw	$t2, xConversion	# t2: 64
	mult	$t1, $t2		
	mflo	$t3			# $t3: yPos * 64
	add	$t3, $t3, $t0		# $t3: (yPos * 64) + xPos
	lw	$t2, yConversion
	mult	$t3, $t2
	mflo	$t0			# t0: ( yPos * 64 + xPos ) * 4
	
	la	$t1, frameBuffer
	add	$t0, $t1, $t0		# t0: = ( yPos * 64 + xPos ) * 4 + frameBuffer
	lw	$t4, 0($t0)
	sw	$s0, 0($t0)
	
	## SET VELOCITY
	lw 	$t2, platformLeft
	beq	$a0, $t2, setVelocityLeft
	
	lw 	$t2, platformRight
	beq	$a0, $t2, setVelocityRight
	
setVelocityLeft:
	addi	$t5, $zero, -1		# set x velocity to -1
	addi	$t6, $zero, 0 		# set y velocity to zero
	sw	$t5, xVel		# update xVel in memory
	sw	$t6, yVel		# update yVel in memory
	j exitVelocitySet
	
setVelocityRight:
	addi	$t5, $zero, 1		# set x velocity to 1
	addi	$t6, $zero, 0 		# set y velocity to zero
	sw	$t5, xVel		# update xVel in memory
	sw	$t6, yVel		# update yVel in memory
	j exitVelocitySet
	
exitVelocitySet:
	
	### Head location checks
	li 	$t2, 0x00ff0000		# load red color
	bne	$t2, $t4, headNotApple	# if head location is not the apple branch away
	
	jal 	newAppleLocation
	jal	drawApple
	j	exitUpdateSnake
	
updatePlatformPosition:

exitMoving:

	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
