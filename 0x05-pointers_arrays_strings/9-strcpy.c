#include "main.h"
/**
* *_strcpy - copies the string pointed to by src
* @dest: a pointer 
* @src: second pointer
* Return: a value of variable @dest
*/
char *_strcpy(char *dest, char *src)
{
int x;
while(src[x])
{
dest[x] = src[x];
x++;
}
return (dest);
}
