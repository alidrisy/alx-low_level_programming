global start

section .text

start: mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, 1
syscall
mov rax, 60
mov rdi, rdi
syscall

section   .data
msg: db Hello, Holberton, 10


