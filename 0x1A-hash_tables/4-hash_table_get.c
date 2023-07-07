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

	if (ht == NULL || strlen(key) == 0)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indx] == NULL)
		return (NULL);
	
	while (ht->array[indx] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		ht->array[indx] = ht->array[indx]->next;
	}
	return (NULL);
}
