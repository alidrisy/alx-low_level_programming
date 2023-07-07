#include "hash_tables.h"

/**
* hash_table_delete - retrieves a value associated with a key.
* @ht: the hash table we want to delet
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			new = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(new->key);
			free(new->value);
			free(new);
		}
		free(ht->array[i]);
	}
	free(ht);
	ht = NULL;
}
