section .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rdi, 'A'
	jl end
	cmp rdi, 'Z'
	jg end 
	add rax, 32
end:
	ret
