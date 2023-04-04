#include "main.h"
/**
* *_strpbrk - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: char with result
*/
char *_strpbrk(char *s, char *accept)
{
int x = 0, v = 0;
unsigned int c = 0;
while (s[x] != '\0')
{

while (accept[v] != '\0')
{

if (s[x] == accept[v])
c++;
v++;
}
x++;
v = 0;
return (s + x);
}
return ('\0');
}





