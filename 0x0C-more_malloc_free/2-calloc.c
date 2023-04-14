#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* *_memset - initialize a byte of memory.
* @c: char
* @v: int
* @n: int
* Return: c
*/

char *_memset(char *c, int v, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
c[i] = v;

return (c);
}
/**
* *_calloc - allocates memory for an array, using malloc.
* @nmemb: the array
* @size: the size of bytes
* Return: x
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x == 0)
return (NULL);

_memset(x, 0, nmemb * size);
return (x);
}
