#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key.
* @ht: the hash table you want to add or update the key/value to
* @key: is the key
*
* Return: the value associated with the element, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx, i;

	if (key == NULL || ht == NULL)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	if (indx > ht->size)
		return (NULL);

	for (i = indx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}
	return (NULL);
}
