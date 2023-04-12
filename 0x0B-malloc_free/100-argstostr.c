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
char *c;
int x, v, n;
if (ac == 0 || av == NULL)
return (NULL);
n = 0;
for (x = 0; x < ac; x++)
{
c = *(av + x);
for (v = 0; v < ac; v++)
{
n++;
}
n += 1;
}
c = malloc(sizeof(char) * n);
if (c == NULL)
{
free(c);
return (NULL);
}
n = 0;
for (x = 0; x < ac; x++)
{
c = av[x];
for (v = 0; av[v][x]; v++)
{
c[n] = av[v][x];
n++;
}
c[n] = '\n';
n++;
}
c[n] = '\0';
return (c);
}
