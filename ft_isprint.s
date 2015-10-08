section .text
	global _ft_isprint

_ft_isprint:
	xor rax, rax
	cmp rdi, 32
	jl false
	cmp rdi, 127
	jl true
false:
	ret
true:
	inc rax
	ret
