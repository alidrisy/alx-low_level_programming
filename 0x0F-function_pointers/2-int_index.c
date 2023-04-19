#include "function_pointers.h"

/**
* int_index - executes a function given as a parameter on each element of an array.
* @array: array of elements
* @size: the size of the array
* @cmp: a pointer to the function you need to use
* Return : -1
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
