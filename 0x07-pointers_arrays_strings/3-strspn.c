#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
while (accept[x] != '\0')
{
if (accept[x] != ' ' && accept[x] != ',')
x++;
s[x] = accept[x];
}
return (x);
}
