#include "main.h"
/**
* *_strpbrk - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: char with result
*/
char *_strpbrk(char *s, char *accept)
{
int x = 0, v;

for ( x = 0; s[x] >= '\0'; x++)
{
v = 0;
while (accept[v] != '\0')
{
v++;
}
if (s[x] == accept[v])


x++;

return (s + x);
}
return ('\0');
}





