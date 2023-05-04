#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: is a number
*/

void print_binary(unsigned long int n)
{
int f = 0;
int i;
int x, b;

if (n == 0)
_putchar('0');

for (i = 0; i < 64; i++)
{
x = ((1 << (63 - i)) & n);
if (x >>(63 - i))
f = 1;
if (f != 0)
{
b = x >> (63 - i);
}
_putchar(b + '0');
}
}

