#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: old size
* @new_size: new
* Return: ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *x;
unsigned int i;

if (ptr == NULL)
{
x = malloc(new_size);
return (x);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
while (old_size == new_size)
return (ptr);
x = malloc(new_size);
if (x == NULL)
{
return (NULL);
}
for (i = 0; i < new_size && i < old_size; i++)
x[i] = ((char *)ptr)[i];
free(ptr);
return (x);
}
