%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1
%define EOF					-1
%define OK					10

section .rodata
nll:
	db "(null)", 10 

section .text
	global _ft_puts
	extern _ft_strlen
	
_ft_puts:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	cmp rdi, 0x0
	je null
print:
	mov r11, rdi
	call _ft_strlen
	mov rdi, STDOUT						;output
	mov rsi, r11						;string
	mov rdx, rax						;len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	lea rsi, [rel nll + 6]				;string
	mov rdx, 0x1						;len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error
	mov rax, OK
	jmp end
error:
	mov rax, EOF
end:
	leave
	ret
null:
	mov rdi, STDOUT						;output
	lea rsi, [rel nll]
	mov rdx, 0x7						;len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error
	mov rax, OK
	jmp end
