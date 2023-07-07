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
	unsigned long int idx, i;
	char *str_v;
	hash_node_t *new;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	i = 0;
	idx = key_index((const unsigned char *)key, ht->size);

	str_v = strdup(value);
	if (str_v == NULL)
	return (0);

		for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = str_v;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
	free(new);
	return (0);
	}

	new->value = str_v;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
