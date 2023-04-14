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
for ( new_size = 0; new_size <= old_size; new_size++)
x = malloc(sizeof(ptr) * new_size);
if (x == NULL)
{
return (NULL);
}
free (ptr);
return (x);
}
