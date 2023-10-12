#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of
 * integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located, or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int s = size;
	int i = 1, x, c;

	if (size == 0 || !array)
	{
		return (-1); }
	while (i < s && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2; }
	if (i >= s)
		s = size - 1;
	else
		s = i;
	i = i / 2;
	printf("Value found between indexes [%d] and [%d]\n", i, s);
	while (i <= s)
	{
		printf("Searching in array: ");
		for (x = i; x <= s; x++)
		{
			if (x != s)
				printf("%d, ", array[x]);
			else
				printf("%d\n", array[x]); }
		if (((i + s) % 2) == 0)
			c = ((i + s) / 2);
		else
			c = (((i + s) - 1) / 2);
		if (array[c] < value)
			i = c + 1;
		else if (array[c] > value)
			s = c - 1;
		else
			return (c); }
	return (-1);
}
