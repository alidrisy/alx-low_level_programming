#include "main.h"


/**
* _strcmp - compares two strings.
* @s1: first string
* @s2: second string
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
int c, n, i;

n = *(s1 + 0);

c = *(s2 + 0);

i = n - c;

return (i);
}
