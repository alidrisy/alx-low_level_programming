#include "main.h"
/**
* *_strstr - gets the length of a prefix substring.
* @haystack: char pointer
* @needle: char pointer
* Return: needle or NULL
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int x, v;

for (v = 0; haystack[v]; v++)
{

for (x = 0; needle[x]; x++)
{
v++;
if (needle[x] == haystack[v])
{
break;
}

}
if (needle[x] != '\0')
{
return (haystack + v);
}
}
return ('\0');
}





