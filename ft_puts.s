%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1
%define EOF					-1
%define OK					10

section .data
	nll:
		db "(null)"

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	cmp rdi, 0x0
	je null
print:
	mov r10, rdi
	call _ft_strlen
	mov rdi, STDOUT						;output
	mov rsi, r10						;string
	mov rdx, rax						;len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error	
	push 10
	mov rdi, rsp
	mov rsi, rdi
	mov rdi, STDOUT						;output
	mov rdx, 0x1
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc error
	js error
	jmp end
error:
	mov rax, EOF
	ret
end:
	mov rax, OK
	ret
null:
	lea rdi, [rel nll]
	jmp print
