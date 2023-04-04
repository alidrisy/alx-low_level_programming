#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: pointer char
* @c: char variable
* Return: character c in the string s.
* Return: NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{

int z = 0;
while (*s != c)
{
s++;
z++;
}
if (*s == c)
return (s + z);
else
return (0);
}

