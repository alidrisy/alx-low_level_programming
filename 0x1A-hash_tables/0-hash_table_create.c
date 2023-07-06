#include "hash_tables.h"

/**
* hash_table_create - creates a hash table.
* @size: the size of the array
* Return: a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	table->size = size;

	for(i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}


