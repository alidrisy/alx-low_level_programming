#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print the number of value the input
* @argc: the number of value
* @argv: pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
(void)*argv;
if (argc > 0)
{
printf("%d\n", argc-1);
}
return (0);
}
