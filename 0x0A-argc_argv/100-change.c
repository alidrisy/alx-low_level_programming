#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins
* @argc: number og argument
* @argv: a pointer
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int cents, i;
cents = atoi(argv[1]);

if ( argc == 0 || argc == 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
}
while (cents >= 1)
{
if (cents > 25)
for (i = 0; cents > 24; i++)
cents = cents - 25;
else if (cents < 25 && cents > 9)
for (; cents > 9; i++)
cents = cents - 10;
else if (cents < 10 && cents > 4)
for (; cents > 4; i++)
cents = cents - 5;
else if (cents < 5 && cents > 1)
for (; cents > 1; i++)
cents = cents - 2;
else if (cents == 1)
for (; cents != 0; i++)
cents = cents - 1;
}
printf("%d\n", i);

return (0);
}





