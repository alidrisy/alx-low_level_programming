#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - adds two numbers.
* @argc: numbers of arguments
* @argv: pointer
* Return: 1 or 0
*/

int main(int argc, char *argv[])
{
int i, v, n, x;
if (argc < 2)
{
printf("0\n");
}
char *s;
else 
{
x = 0;
for (i = 1; i < argc; i++)
{
s = argv[i];
v = strlen (s);
for (n = 0; n < v; n++)
{
if (isdigit(*(s + n)) == 0)
{
printf("Error\n");
return (1);
}
}
x += atoi(argv[i]);
}
printf("%d\n", x);
}
return (0);
}
