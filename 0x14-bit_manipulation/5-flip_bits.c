#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* @n: is a number
* @m: is another number
* Return: the number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int x, i = 0;
x = n ^ m;
while (x > 0)
{
x &= (x - 1);
i++;
}
return (i);
}
