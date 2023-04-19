#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter on each element of an array.
* @array: array of elements
* @size: the size of the array
* @action: a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i, x;
if (!array || !action)
return;

for (i = 0; i < size; i++)
{
x = array[i];
action(x);
}
}
