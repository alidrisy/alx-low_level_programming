#include "hash_tables.h"

/**
* hash_table_set - gives you the index of a key.
* @ht: the hash table you want to add or update the key/value to
* @key: is the key
* @value: is the value
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	value = strdup(value);
	key = strdup(key);

	if (value == NULL || key == NULL)
	return (0);

	new = malloc(sizeof(hash_node_t));

	idx = key_index((const unsigned char*)key, (unsigned long int)ht->size);

	new->value = (char*)value;
	new->key = (char*)key;

	if (ht->array[idx] == NULL)
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = (char*)value;
			return (1);
		}
	}
	return (0);
}
