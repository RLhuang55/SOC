.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 0xffffff0b	
	li x4, 0xffffffab	
	la x5, _array		
	sb x3, 0(x5)		
	sb x4, 1(x5)		
	la x5, _array		
	lb x6, 0(x5)		
	lb x7, 1(x5)		

_array:	
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00

	.end			# End of file