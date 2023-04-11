#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array of chars
* @size: is a size of bytes
* @c: is a char
* Return: NULL or array
*/

char *create_array(unsigned int size, char c)
{
char *x;
int i = 0;
x = malloc(size * sizeof(char));
if (size == 0)
{
return ('\0');
}

while (i < size)
{
x[i] = c;
i ++;
}
x[i] = '\0';
return (x);
}
