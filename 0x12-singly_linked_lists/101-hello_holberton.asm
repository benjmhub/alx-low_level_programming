section .data
    hello_holberton db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Pass the format string to rdi
    mov rdi, format
    ; Pass the address of the hello_holberton string to rsi
    mov rsi, hello_holberton
    ; Call the printf function
    call printf

    ; Restore the original stack frame
    pop rbp
    ; Return 0 from the main function
    xor rax, rax
    ret

