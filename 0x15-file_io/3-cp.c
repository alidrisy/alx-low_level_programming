#include "main.h"

/**
* f_close - close the files.
* @x: the value of the file descriptor.
* @i: the value of the file descriptor.
*/

void f_close(int x, int i)
{
if (close(x) == -1)
{
dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", x);
exit(100);
}

if (close(i) == -1)
{
dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", i);
exit(100);
}

}

/**
* main - copies the content of a file to another file
* @argv: number of argument.
* @argc: the argument (files);
* Return: 1
*/

int main(int argc, char *argv[])
{
int x, i;
ssize_t v = 1024, n;
char c[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }

x = open(argv[1], O_RDONLY);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
exit(98); }
i = open(argv[2], O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
exit(99); }
while (v == 1024)
{
v = read(x, c, 1024);
if (v == -1)
{
dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
exit(98); }

n = write(i, c, v);
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
exit(99); }
}

f_close(x, i);
return (0);
}
