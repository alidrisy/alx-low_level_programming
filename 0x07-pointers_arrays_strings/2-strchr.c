#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: pointer char
* @c: char variable
* Return: character c in the string s.
*
*/
char *_strchr(char *s, char c)
{
char **v = *s;
int x = 0;
while (*s != c)
{
s++;
x++;
}
if (*s == c)
{
return (v + x);
}
else
{
return (0);
}
