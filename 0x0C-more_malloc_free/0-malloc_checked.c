#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc.
* @b: is the size
* Return: b
*/

void *malloc_checked(unsigned int b)
{
unsigned int *i;

for (i = 0; i < b; i++)
b = malloc(i + 1);
if (!b)
{
return (98);
}
return (b);
}

