#include<stdio.h>

/**
* main - prints the number in lowercase
* use just putchar
*
* Return: Always 0.
*/
int main(void)
{
int number;
for (number = 0; number < 16; number++)
putchar((number % 16) + '0');

putchar('\n');

return (0);
}
