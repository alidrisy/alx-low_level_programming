#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: is a number
*/

void print_binary(unsigned long int n)
{
int f = 0;
int i;
int x;

if (n == 0)
_putchar('0');

for (i = 63; i >= 0; i--)
{
x = (n >> i);
if (x != 0)
f = 1;
if (f != 0)
{
if (x & 1)
_putchar('1');
else
_putchar('0');
}
}
}

