#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: v
*/
unsigned int _strspn(char *s, char *accept)
{
int x = 0, v = 0;
unsigned int c = 0;
while (s[x] != ' ' && s[x] != '\0')
{

while (accept[v] != '\0')
{

if (s[x] == accept[v])
c++;
v++;
}
x++;
v = 0;
}
return (x);
}




 
