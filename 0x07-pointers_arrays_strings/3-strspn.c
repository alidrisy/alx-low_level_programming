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
while (*(accept + x))
{
x++;
v = 0;
if (*(accept + x) == *(s + v))
v++;
}

return (v);
}


