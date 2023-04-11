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
char *x = NULL;
unsigned int i = '\0';

if (size == 0)
{
return ('\0');
}
while (size != 0)
{
x = (char *)malloc(size * sizeof(char));
if (x != '\0')
{
for (i = 0; i < size; i++)
x[i] = c;
}
return (x);
}
