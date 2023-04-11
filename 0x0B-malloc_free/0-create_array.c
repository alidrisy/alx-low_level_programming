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
char *x = '\0';
unsigned int i = 0;
x = (char *)malloc(size * sizeof(char));
if (size == 0)
{
return ('\0');
}

while (i < size)
{
x[i] = c;
i++;
}


return (x);
}
