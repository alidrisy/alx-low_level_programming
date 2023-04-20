#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array of elements
* @size: the size of the array
* @cmp: a pointer to the function you need to use
* Return: index (int)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (!cmp || size <= 0 || !array)
return (-1);

x = size;
while (size--)
{
if (cmp(array[x - size]))
return (x - size);
}
return (-1);
}
