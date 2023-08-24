section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8 ; Adjust stack pointer to align it to 16 bytes

    ; Call printf with the format string
    mov edi, format
    xor eax, eax ; Clear EAX to indicate printf with variable arguments
    call printf

    ; Print a new line
    mov edi, newline
    xor eax, eax ; Clear EAX to indicate printf with variable arguments
    call printf

    add rsp, 8 ; Restore stack pointer
    xor eax, eax ; Return 0 from main
    ret
