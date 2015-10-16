section .text
	global _ft_memset

_ft_memset:
		push	rdi
		mov		rax, rsi
		mov		rcx, rdx
		rep		stosb
		pop 	rax
		ret
