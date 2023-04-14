#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings.
* @s1: char
* @s2: char
* @n: int
* Return: x
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int c, v, z;
char *x;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (c = 0; s1[c]; c++)
;
for (v = 0; s2[v]; v++)
;
if (n < v)
v = n;
x = malloc(sizeof(char) * (c + v) + 1);
if (x == NULL)
return (0);

for (z = 0; z < (c + v); z++)
{
if (z < c)
x[z] = s1[z];
else
x[z] = s2[z - c];
}

x[z] = '\0';

return (x);
}
