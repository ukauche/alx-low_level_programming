section .data
    hello_string db "Hello, Holberton", 0xA ; 0xA is the ASCII code for a new line

section .text
    global _start

_start:
    ; syscall number for sys_write (1)
    mov rax, 1

    ; file descriptor for stdout (1)
    mov rdi, 1

    ; pointer to the string to print
    mov rsi, hello_string

    ; calculate the length of the string
    xor rcx, rcx
    mov rdx, 0
.loop:
    cmp byte [rsi + rcx], 0
    je .end
    inc rcx
    jmp .loop
.end:
    ; length of the string to print
    mov rdx, rcx

    ; syscall to write the string to the console
    syscall

    ; syscall number for sys_exit (60)
    mov rax, 60

    ; exit code 0
    xor rdi, rdi

    ; syscall to exit the program
    syscall
