#include<stdio.h>

/**
* main - print fizz and buzz and fizzbuzz
*
* Return: Always 0.
*/

int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{

if ((x % 3) == 0)

printf("Fizz");

if ((x % 5) == 0)

printf("Buzz");

if ((x % 3) == 0 && (x % 5) == 0)

printf("FizzBuzz");

else
printf("%d", x);
if (x == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
