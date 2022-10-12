# Author: Mathias Barrios
# Date: 12 OCT 2022
# Purpose: Block Breaker Game
.data 

frameBuffer:	.space	0x80000
xPos:		.word	0
yPos:		.word	0
ballX:		.word	0
ballY: 		.word	1


.text
### DRAW BACKGROUND
	la	$t0, frameBuffer
	li	$t1, 8192		##512*256 ???
	li	$t2, 0x00d3d3d3		##Background Color
	
loop1:
	sw	$t2, 0($t0)
	addi	$t0, $t0, 4		##siguiente pixel en pantalla
	addi	$t1, $t1, -1		##-1 q pixel y repetimos hasta que ya no queden
	bnez	$t1, loop1