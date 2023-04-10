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
if (argc > 0 )
{
for (i = 0; i < argc; i++)
{
x = x * atoi(argv[i]);
}
printf("%d\n", x);
}
else
{
printf("error\n");
}
return (1);
}
