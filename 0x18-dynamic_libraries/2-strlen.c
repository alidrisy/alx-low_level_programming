#include "main.h"
/**
* _strlen - get the length of string
* @s: char
* Return: 0
*/
int _strlen(char *s)
{
int i;
for(i = 0; s[i]!= '\0'; i++)
;
return (i);
}
