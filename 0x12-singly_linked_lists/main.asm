section   .data
massage: db "Hello, Holberton", 10

global main

section .text




main:
mov rax, 1
mov rdi, 1
mov rsi, massage
mov rdx, 1
syscall
mov rax, 1
mov rdi, rdi
syscall




