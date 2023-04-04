#include "main.h"
/**
* *_strpbrk - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int x = 0, v;

for ( x = 0; s[x] != '\0'; x++)
{
v = 0;
while (accept[v] != '\0')
{
v++;
}
if (s[x] == accept[v])
{
break;
}
if (accept[v] != '\0')
return (s + x);
}
return ('\0');
}





