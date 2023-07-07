#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table you want to add or update the key/value to
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int x = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			x++;
		}
		if (ht->array[i+1] != NULL && x)
			printf(", ");
	}
	printf("}\n");
}
