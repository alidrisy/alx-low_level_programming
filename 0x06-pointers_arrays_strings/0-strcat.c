#include "main.h"
#include <stdio.h>
/**
* *_strcat - concatenates two strings.
* @dest: a pointer
* @src: a second pointer
* Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int x = 0, c = 0;
while (dest[c] != '\0')
{
x++;
}
for (x = 0; src[x]; x++)
{
dest[c] = src[x];
c++;
x++;
}
dest[c] = '\0';
return (dest);
}
