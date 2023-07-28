section .data
    hello_string db "Hello, Holberton", 0
    format_string db "%s", 0

section .text
    global main
    extern printf

main:
    ; Save callee-saved registers
    push rbp
    push rbx
    push r12
    push r13
    push r14
    push r15

    ; Pass the arguments to printf
    mov rdi, format_string
    mov rsi, hello_string
    call printf

    ; Restore callee-saved registers and return
    pop r15
    pop r14
    pop r13
    pop r12
    pop rbx
    pop rbp
    ret
