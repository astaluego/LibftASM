%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1
%define EOF					-1

section .data
nl:
	db 10

section .text
	global _ft_puts
	extern _ft_strlen
	
_ft_puts:
	mov r10, rdi
	call _ft_strlen
	cmp rax, 0x0
	je end
print:
	mov rsi, r10						;string
	mov rdx, rax						;len
	mov rdi, STDOUT						;output
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error
	lea rsi, [rel nl]					;string
	mov rdx, 0x1						;len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error
	jmp end
error:
	mov rax, EOF
	leave
	ret
end:
	leave
	ret
