#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: is anumber
* @index: is an index
* Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (*n & ~(1 << index));

return (1);
}
