#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *argstostr - concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return: pointer or NULL
*/

char *argstostr(int ac, char **av)
{
char *c, *z;
int x, v, n;
if (ac == 0 || av == NULL)
return (NULL);
n = 0;
for (x = 0; x < ac; x++)
{
z = *(av + x);
for (v = 0; v < ac; v++)
{
n++;
}
n += 1;
}
c = malloc(sizeof(char) * n);
n = 0;
for (x = 0; x < ac; x++)
{
z = *(av + x);
for (v = 0; z[v]; v++)
{
c[n] = z[v];
n++;
}
c[n] = '\n';
n++;
}

return (c);
}
