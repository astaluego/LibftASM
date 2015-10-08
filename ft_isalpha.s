section .text
	global _ft_isalpha

_ft_isalpha:
	xor rax, rax
	cmp rdi, 'A'
	jl false
	cmp rdi, 'Z'
	jle true
	cmp rdi, 'a'
	jl false
	cmp rdi, 'z'
	jle true
false:
	ret
true:
	inc rax
	ret
