#include "main.h"
/**
* *_strpbrk - gets the length of a prefix substring.
* @s: char pointer
* @accept: char pointer
* Return: s or Null
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int x, v;

for (x = 0; s[x]; x++)
{

for (v = 0; accept[v]; v++)
{
if (s[x] == accept[v])
{
break;
}

}
if (accept[v] != '\0')
{
return (s + x);
}
}
return ('\0');
}





