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
for ( new_size = 0; new_size <= old_size; new_size++)
malloc(sizeof(ptr) * new_size);
if (ptr == NULL)
{
malloc(new_size);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
free (ptr);
return (ptr);
}
