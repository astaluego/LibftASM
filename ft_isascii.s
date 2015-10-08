section .text
	global _ft_isascii

_ft_isascii:
	xor rax, rax
	cmp rdi, 0
	jl false
	cmp rdi, 128
	jl true
false:
	ret
true:
	inc rax
	ret
