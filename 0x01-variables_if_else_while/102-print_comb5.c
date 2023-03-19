#include<stdio.h>

/**
* main - prints the number in lowercase
* use just putchar
*
* Return: Always 0.
*/
int main(void)
{
int number, number2;
for (number = 0; number <= 98; number++)
{
for (number2 = number + 1; number2 <= 99; number2++)
{
putchar((number / 10) + '0');
putchar((number % 10) + '0');
putchar(' ');
putchar((number2 / 10) + '0');
putchar((number2 % 10) + '0');
if (number == 8 && number2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}


