section .text
	global _ft_strdup
	extern _ft_strlen
	extern _malloc
	extern _ft_strcat

_ft_strdup:
	mov r12, rdi
	call _ft_strlen
	mov r13, rax
	mov rdi, rax
	call _malloc
	mov rdi, rax
	mov rsi, r12
	mov rdx, r13
	call _ft_strcat
	ret
