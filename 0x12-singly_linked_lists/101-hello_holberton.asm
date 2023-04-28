;;  A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
	;;  Compiled using nasm and gcc.
	;;  nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello

section .data
    format db "%s\n", 0
    message db "Hello, Holberton", 0

section .text
    extern printf     ;C function to be called
    global main       ;main function

main:
    push rbp
    mov rdi, format
    mov rsi, message
    xor eax, eax     ;clear eax register for return value
    call printf      ;call C function
    pop rbp

    ret              ;return to the operating system
