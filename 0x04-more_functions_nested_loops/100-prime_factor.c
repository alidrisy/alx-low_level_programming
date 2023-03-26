#include<stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
long int n;
n = 612852475143;
long int x=2, z=0, m;
while (n !=0)
{
if (n % x !=0)
x = x + 1;
else 
{
m = n; 
n = n / x;
if (n == 0)
{
printf("%ld is the largest prime factor !", m);
z = 1;
break;
}
}
}
return (0);
}
