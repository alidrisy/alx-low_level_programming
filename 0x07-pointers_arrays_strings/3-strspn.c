#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: v
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0, v, c;
while (s[x] != ' ' && s[x] != '\0')
{
while (accept[v])
{
if (s[x] == accept[v])
c++;
v++;
}
x++
v = 0;
return (x);
}




 
