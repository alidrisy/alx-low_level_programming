#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
int x;
for (x = 0; accept[x] >= '\0'; x++)
{
if (accept[x] != ' ' && accept[x] != ',')
s[x] = accept[x];
}
return (s);
}
