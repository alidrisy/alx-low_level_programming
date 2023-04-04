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

for (x = 0; needle[x]; x++)
{

for (v = 0; haystack[v]; v++)
{
if (needle[x] == haystack[v])
{
break;
}

}
if (haystack[v] != '\0')
{
return (needle + x);
}
}
return ('\0');
}





