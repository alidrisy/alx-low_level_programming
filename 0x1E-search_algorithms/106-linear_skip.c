#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: is a pointer to the head of the list to search in
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (list->express && list->n < value)
	{
		prev = list;
		list = list->express;
		printf("Value checked at index [%ld] = [%d]\n", list->index,
				list->n);
	}

	if (list->express == NULL)
	{
		prev = list;
		while (list->next)
			list = list->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			list->index);

	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
