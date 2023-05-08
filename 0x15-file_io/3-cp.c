#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
* f_close - close the files.
* @x: the value of the file descriptor.
* @y: the value of the file descriptor.
*/

void f_close(int x, int y)
{
if (close(x) == -1)
{
dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", x);
exit(100);
}

if (close(y) == -1)
{
dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", y);
exit(100);
}

}

/**
* main - copies the content of a file to another file
* @argv: number of argument.
* @argc: the argument (files);
* Return: 1
*/

int main(int argv, char *argc[])
{
int x, i, n;
ssize_t v = 1024;
char *c;

if (argv != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }

c = malloc(1024 * sizeof(char));

x = open(argc[1], O_RDONLY);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argc[1]);
exit(98); }
i = open(argc[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argc[2]);
exit(99); }
while (v == 1024)
{
v = read(x, c, 1024);
if (v == -1)
{
dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argc[1]);
exit(98); }

n = write(i, c, v);
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argc[2]);
exit(99); }
}

f_close(x, v);
return (0);
}
