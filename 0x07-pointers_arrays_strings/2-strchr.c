#include "main.h"
#include <stdio.h>
#include <stddif.h>
/**
* *_strchr - locates a character in a string
* @s: pointer char
* @c: char variable
* Return: character c in the string s.
*
*/
char *_strchr(char *s, char c)
{

int x = 0;
while (*s != c)
{
s++;
x++;
}
if (*s == c)
{
return (s + x);
}
else
{
return NULL;
}
