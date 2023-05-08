#include "main.h"

/**
* read_textfile - reads a text file and prints it.
* @filename: pointer to the file.
* @letters: the number of letters it should read.
* Return: the number of letters it could read.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t i, n;
char *x;

if (filename == NULL)
return (0);

x = malloc(letters * sizeof(char));
if (x == NULL)
return (0);

i = open(filename, O_RDONLY);
if (i == -1)
return (0);

n = write(STDOUT_FILENO, x, read(i, x, letters));
if (n == -1)
return (0);

close(i);
free(x);

return (n);
}
