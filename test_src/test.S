	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 0xffff0f0b	
	li x4, 0x0000f0ab	
	la x5, _array		
	lh x4, 0(x5)
	sb x3, 0(x4)		
	li x2, 10
	li x26, 10
	li x27, 10
_array:	
	.byte 0x10
	.byte 0x20
	.byte 0x30
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00

	.end			# End of file