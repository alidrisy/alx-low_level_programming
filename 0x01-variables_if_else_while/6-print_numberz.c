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
putchar("%d", number);

putchar("\n");

return (0);
}
