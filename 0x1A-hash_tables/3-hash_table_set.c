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
	unsigned long int indx;
	hash_node_t *new;
	
	indx = key_index((unsigned char*)key, ht->size);
	new = ht->array[indx];
	
	if (new == NULL)
	{
		new->value = (char*)value;
		new->key = (char*)key;
		return (1);
	}
	else
	{
		if (strcmp(new->key, key) == 0)
		{
			new->value = (char*)value;
			return (1);
		}
		else
		{
			ht->array[0]->key = (char*)key;
			ht->array[0]->value =(char*) value;
			return (1);
		}
	}
	return (0);
}
