#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int c;
	int s = size - 1;
	int x;

	while (i <= s)
	{
		printf("Searching in array: ");
		for (x = i; x <= s; x++)
		{
			if (x != s)
			printf("%d, ", array[x]);
			else
			printf("%d\n", array[x]);
		}

		if (((i + s) % 2) == 0)
		c = ((i + s) / 2);
		else
		c = (((i + s) - 1) / 2);

		if (array[c] < value)
		i = c + 1;
		else if (array[c] > value)
		s = c - 1;
		else
		return (c);
	}
	return (-1);
}
