#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: numbers of arguments
* @argv: pointer
* Return: 1
*/

int main(int argc, char *argv[])
{
int i, x = 1;
if (argc > 1 && argc < 2)
{
for (i = 1; i < argc; i++)
{
x *= atoi(argv[i]);
}
printf("%d\n", x);
}
else
{
printf("error\n");
}
return (1);
}
