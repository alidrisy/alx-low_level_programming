#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: v
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0, v;
while (*(s + x))
{
x++;
v = 0;
while (*(accept + v))

v++;
if (*(s + x) == *(accept + 1))
return (x);
}

return (x);
}


