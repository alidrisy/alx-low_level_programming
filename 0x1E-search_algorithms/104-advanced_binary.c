#include "search_algos.h"

/**
 * binary_recursive - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @end: is the top size of array
 * @bg: is the low size of array
 * @value: is the value to search for
 * Return: first index where value is located, or -1
 */

int binary_recursive(int *array, size_t bg, size_t end, int value)
{
	size_t x, c;

	if (bg > end)
		return (-1);

	printf("Searching in array: ");
	for (x = bg; x <= end; x++)
	{
		if (x != end)
			printf("%d, ", array[x]);
		else
			printf("%d\n", array[x]);
	}
	if (((bg + end) % 2) == 0)
		c = ((end + bg) / 2);
	else
		c = (((end + bg) - 1) / 2);

	if (array[c] < value)
		return (binary_recursive(array, c + 1, end, value));
	else if (array[c] > value)
		return (binary_recursive(array, bg, c - 1, value));
	else if (array[c] == value && array[c - 1] == value)
		return (binary_recursive(array, bg, c, value));
	else
		return (c);
}


/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located, or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
