#include "hash_tables.h"

/**
* hash_table_delete - retrieves a value associated with a key.
* @ht: the hash table we want to delet
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *ne;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			ne = new->next;
			free(new->key);
			free(new->value);
			free(new);
			new = ne;
		}
		ht->array[i] = NULL;
		free(ht->array);
	}
	free(ht);
}
