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
unsigned int c, v, z;
char *x;
if (s1 == NULL)
{
s1 =  ;
}
if (s2 == NULL)
{
s2 =  ;
}
for (c = 0; s1[c]; c++)
;
for (v > c; s2[v]; v++)
;
x = malloc(sizeof(char) * n);
if (x == NULL)
return (0);
z = 0;
while (z < (c + v))
{
if (z < c)
x[z] = s1[z];
else
x[z] = s2[z - c];
z++;
}
x[z] = 0;
z++;
return (x);
}
