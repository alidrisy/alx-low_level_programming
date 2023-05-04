#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: is anumber
* @index: is an index
* Return: the value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

int i;
i = (n >> index) & 1;

return (i);
}
