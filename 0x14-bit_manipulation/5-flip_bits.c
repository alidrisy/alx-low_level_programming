#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* @n: is a number
* @m: is another number
* Return: the number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int x;
if (n == 0 && m == 0)
return (0);

x = n ^ m;
while (x > 0)
{
x &= (x - 1);

i++;
}
return (i);
}
