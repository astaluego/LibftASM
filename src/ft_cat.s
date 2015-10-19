%define MACH_SYSCALL(nb)	0x2000000 | nb
%define READ				3
%define WRITE				4
%define	STDOUT				1

section .bss
	buffer resb 1024

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp
	lea rsi, [rel buffer]
	mov rdx, 1024
	mov rax, MACH_SYSCALL(READ)
	syscall
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE) 
	syscall 
	leave
	ret
