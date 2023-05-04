#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: is a number
*/

void print_binary(unsigned long int n)
{
int f = 0;
int i;
unsigned long int x, b;

for (i = 0; i < 32; i++)
{
x = ((1 << (31 - i)) & n);
if (x >> (31 - i))
f = 1;
if (f)
{
b = x >> (31 - i);
printf("%ld", b);
}
}
if (n == 0)
{
printf("%ld", n);
}
}
