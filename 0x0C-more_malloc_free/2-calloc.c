#include"main.h"
#include <stdio.h>
#include <stdlib.h>

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
x = malloc(sizeof(int) * size);
if (x == 0)
return (NULL);

return (x);
}
