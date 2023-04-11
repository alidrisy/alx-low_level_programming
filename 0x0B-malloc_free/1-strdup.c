#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: a string
* Return: pointer or NULL
*/

char *_strdup(char *str)
{
int i;
char *x;
if (str == 0)
{
return (0);
}
for (i = 0; str[i]; i++)
;
x = malloc((i + 1)* (char));
if (x == 0)
{
return (0);
}
x[i] = 0;
while (i--)
{
x[i] = str[i];
}
return (x);
}
