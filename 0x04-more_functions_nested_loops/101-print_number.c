#include<stdio.h>

/**
* print_number - prints an integer.
* @n: a variable 
*/
void print_number(int n)
{
if (n < 0)
{{
putchar(-);
n = -n;
putchar((n % 10) + 0);
}
if (n == 0)
{
putchar(0);
}
if (n / 10)
{

