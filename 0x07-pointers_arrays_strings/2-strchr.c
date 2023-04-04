#include "main.h"
#include <stdio.h>

/**
* *_strchr - locates a character in a string
* @s: pointer char
* @c: char variable
* Return: character c in the string s.
* Return: NULL if the character is not found
*/
char *_strchr(char *s, char c)
{


while (*s != c)
{
s++;

}
if (*s == c)
{
return (s);
}
else
{
return ('\0');
}
return ('\0');
}
