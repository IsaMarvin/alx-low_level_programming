	extern printf

	section .data
message:	db "Hello, Holberton", 0
format:		db "%s", 10, 0

	section .text

	global main
main:
	push	rbp

	mov 	rax, 0
	mov	rdi,format
	mov	rsi,message
	call	printf

	pop	rbp

	mov 	rax, 0
	ret
