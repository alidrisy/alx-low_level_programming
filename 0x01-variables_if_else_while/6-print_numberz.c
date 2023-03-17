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
for (number = 0; number < 10; number++)
putchar((number % 10)+'0');

putchar('\n');

return (0);
}
