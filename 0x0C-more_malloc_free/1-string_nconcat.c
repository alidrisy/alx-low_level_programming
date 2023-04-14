#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings.
* @s1: char
* @s2: char
* @n: int
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int c, v, z, b;
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
x = malloc(sizeof(char) * (c + v + 1));
if (x == NULL)
return (0);
z = 0;


for (z = 0; z < c; z++)
x[z] = s1[z];
for (z = 0; b = c; z < v; b++, z++)
x[b] = s2[z];


x[z] = '\0';

return (x);
}
