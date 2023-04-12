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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
;
for (v = 0; s2[v]; v++)
;
x = malloc(sizeof(char) * (i + v + 1));
if (x == NULL)
{
return (NULL);
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
