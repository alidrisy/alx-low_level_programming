#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: pointer
* @c: char variable
* Return: character c in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
int x;
for (x >= c; s[x]; x++)
{
if (c != 0)
return s[x];
else
return 0;
}
}
