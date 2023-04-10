#include "main.h"
#include <stdio.h>

/**
* main - multiplies two numbers.
* @argc: numbers of arguments
* @argv: pointer
* Return: error or 0
*/

int main(int argc, char *argv[])
{
int i, x = 0;
if (argc > 1)
{
for (i = 0; i < argc; i++)
{
x *= atoi(argv[i]);
}
printf("%d", x);
}
else
{
printf("error\n");
}
return (1);
}
