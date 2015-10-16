section .text
	global _ft_isdigit

_ft_isdigit:
	xor rax, rax
	cmp rdi, '0'
	jl false
	cmp rdi, '9'
	jle true
false:
	ret
true:
	inc rax
	ret
