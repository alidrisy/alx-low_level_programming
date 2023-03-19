#include<stdio.h>

/**
* main - prints the number in lowercase
* use just putchar
*
* Return: Always 0.
*/
int main(void)
{
int number, number2, number3;
for (number = 0; number < 10; number++)
{
for (number2 = number + 1; number2 < 10; number2++)
{
for (number3 = number2 + 1; number3 < 10; number3++)
{
putchar((number % 10) + '0');
putchar((number2 % 10) + '0');
putchar((number3 % 10) + '0');

if (number == 7 && number2 == 8 && number3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


