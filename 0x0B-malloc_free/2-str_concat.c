#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings.
* @s1: string
* @s2: string
* Return: the pointer or NULL
*/

char *str_concat(char *s1, char *s2)
{
int i, v, c;
char *x;
if (s1 != '/0')
for (i = 0; s1[i]; i++)
;
if (s2 != '/0')
for (v = 0; s2[v]; v++)
;
x = malloc(sizeof(char) * (i + v + 1));
if (x == 0)
{
return (0);
}
c = 0;
while (c < (i + v))
{
if (c < i)
x[c] = s1[c];
else
x[c] = s2[c - i];
c++;
}
x[c] = 0;
return (x);
}
