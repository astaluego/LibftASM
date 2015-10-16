section .text
	global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp
	mov rbx, rdi
	mov rcx, rsi
copy_s1:
	cmp byte [rbx], 0
	je copy_s2
	inc rbx
	jmp copy_s1
copy_s2:
	cmp byte [rcx], 0
	je end
	mov al, byte [rcx]
	mov byte [rbx], al
	inc rbx
	inc rcx
	jmp copy_s2
end:
	mov byte [rbx], 0
	mov rax, rdi
	leave
	ret
