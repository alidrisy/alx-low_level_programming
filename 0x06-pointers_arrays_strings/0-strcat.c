#include "main.h"
/**
* *_strcat - concatenates two strings.
* @dest: a pointer
* @src: a second pointer
*/
char *_strcat(char *dest, char *src)
{
int x, c = 0;
while (src[c])
{
x++;
}
for (x = 0; src[x] != 0; x++)
{
dest[c] = src[x];
c++;
}
dest[c] = '\0';
return (dest);
}
