global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, massage
mov rdx, 13
syscall
mov rax, 60
mov rdi, rdi
syscall

section   .data
massage: db "Hello, Holberton", 10


