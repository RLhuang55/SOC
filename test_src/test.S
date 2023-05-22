	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 2	
	li x4, 1	
	bgt x3, x4, _branch
_test:
	li x7, 1
_branch:
	li x5, 1
	li x6, 2
	.end			# End of file