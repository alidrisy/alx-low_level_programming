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
	int x;
	int i = 0, c;

	if (array == NULL || size < 1)
		return (-1);

	x = sqrt(size);

	while (i < size)
	{
		if (array[i] >= value)
		{
			c = i - x;
			printf("Value found between indexes [%d] and [%d]\n", c, i);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += x;
		if (i > (int)size)
		{
			c = i - x;
			printf("Value found between indexes [%d] and [%d]\n", c, i);
			i = c;
			break;
		}
	}

	while (c <= i)
	{
		printf("Value checked array[%d] = [%d]\n", c, array[c]);
		if (array[c] == value)
			return (c);
		c++;
	}

	return (-1);
}
