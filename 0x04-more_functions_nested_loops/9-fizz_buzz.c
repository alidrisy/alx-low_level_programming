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
printf("%d ", x);
if (x % 3)
{
printf("Fizz ");
}
if (x % 5)
{
printf("Buzz ");
}
 if ((x % 3) && (x % 5))
  {
  printf("FizzBuzz ");
  }
 }
 return (0);
 }
