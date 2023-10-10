#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located, or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int x, s = size;
	int i = 0, c;

	if (array == NULL || size < 1)
		return (-1);

	x = sqrt(s);

	while (i < s && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += x;
	}
	c = i - x;
	printf("Value found between indexes [%d] and [%d]\n", c, i);
	if (i >= s)
		i = s - 1;
	while (c <= i)
	{
		printf("Value checked array[%d] = [%d]\n", c, array[c]);
		if (array[c] == value)
			return (c);
		c++;
	}

	return (-1);
}
