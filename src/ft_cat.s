%define MACH_SYSCALL(nb)	0x2000000 | nb
%define READ				3
%define WRITE				4
%define	STDOUT				1
%define BUFF				20

section .bss
	buffer resb 20

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp
	mov r15, rdi
while:
	mov rdi, r15
	lea rsi, [rel buffer]
	mov rdx, BUFF
	mov rax, MACH_SYSCALL(READ)
	syscall
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, BUFF
	je while
	leave
	ret
