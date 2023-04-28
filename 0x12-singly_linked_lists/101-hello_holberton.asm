section .data
    hello db 'Hello, Holberton', 10 ; Define a string "Hello, Holberton" followed by a newline character
    len equ $ - hello ; Define the length of the string "hello" in bytes using the current location counter $

section .text
    global main

main:
    mov eax, 0 ; Set eax to 0 to indicate success
    push len ; Push the length of the string "hello" onto the stack
    push hello ; Push the address of the string "hello" onto the stack
    call printf ; Call the printf function to print the string "hello"
    add esp, 8 ; Adjust the stack pointer to remove the pushed arguments
    mov eax, 1 ; Set eax to 1 to indicate exit status
    xor ebx, ebx ; Set ebx to 0 to indicate success
    int 0x80 ; Call the interrupt 0x80 to exit the program
