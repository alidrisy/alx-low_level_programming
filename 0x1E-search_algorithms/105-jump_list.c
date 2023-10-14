#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i, x = sqrt(size);
	listint_t *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	while (list->next != NULL && list->n < value)
	{
		prev = list;
		for (i = 0; i < x && list->next; i++)
			list = list->next;
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			list->index);

	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
