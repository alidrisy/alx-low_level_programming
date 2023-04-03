#include "main.h"
#include <stdio.h>

/**
* *_memcpy - copies memory area
* @dest: memory area
* @src: second memory area
* @n: int variable
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x;
for (x = 0; n > 0; x++)
{
dest[x] = src[x];
n -= 1;
}
return (dest);
}
