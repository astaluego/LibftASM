section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rbx, rdi					;keep arg1
	mov rcx, rsi					;keep arg2
loop:
	cmp rcx, 0						;if arg2 == 0
	je end							;jump to end
	mov byte [rbx], 0				;else arg1[byte] = 0
	inc rbx							;arg1++
	dec rcx							;arg2--
	jmp loop						;jump to loop
end:
	leave
	ret
