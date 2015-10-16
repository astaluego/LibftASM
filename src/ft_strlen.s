section .text
	global _ft_strlen

_ft_strlen:
	xor rax, rax						;initialise i
loop:
	cmp byte[rdi], 0					;if str[i] == '\0'
	je end								;return
	inc rax								;i++
	inc rdi								;str++
	jmp loop
end:
	ret
