#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: numbers of arguments
* @argv: pointer
* Return: 1 or 0
*/

int main(int argc, char *argv[])
{
int i, x = 1;
if (argc > 1 && argc <= 2)
{
for (i = 1; i < 3; i++)
{
x *= atoi(argv[i]);
}
printf("%d\n", x);
}
else if (argc == 1 || argc 
{
printf("Error\n");
return (1);
}
return (0);
}
