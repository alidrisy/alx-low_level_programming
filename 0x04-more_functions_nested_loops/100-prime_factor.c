#include<stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
long n, x;
n = 612852475143;
while (x < (n % 2))
{
if (n / 2 == 0)
{
n /= 2;
continue;
}
for (x = 3; x < (n / 2); x += 2)
{
if (n % x == 0)

n /= x;
}
}
printf("%ld\n", n);
return (0);
}





