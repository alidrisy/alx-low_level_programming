#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: is the string
* Return: c
*/
int _strlen(char *s)
{
int x = 0;
for (; *s != 0; s++)
{
x++;
}
return (x);
}
