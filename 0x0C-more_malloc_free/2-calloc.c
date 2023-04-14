#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**

* *_doit - initialize a byte of memory.

* @x: int

* @ptr: char

*

* Return: pointer

*/

char *_doit(char *ptr, unsigned int x)

{

char *d = ptr;

do

*d++=0;

while (--sizr != 0);

return (d);

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
_doit(x, nmemb * size)
return (x);
}
