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
void *i;


i = malloc(b);
if (i == 0)
{
exit(98);
}
return (i);
}

