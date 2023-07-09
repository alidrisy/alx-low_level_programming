#include "hash_tables.h"

/**
* shash_table_create - creates a hash table.
* @size: the size of the array
* Return: a pointer to the newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
        shash_table_t *table;
        unsigned long int i;

        table = malloc(sizeof(shash_table_t));
        if (table == NULL)
                return (NULL);

        if (size == 0)
                return (NULL);

        table->size = size;
        table->array = malloc(sizeof(shash_node_t *) * size);
        if (table->array == NULL)
                return (NULL);

        for (i = 0; i < table->size; i++)
                table->array[i] = NULL;


        return (table);
}



/**
* shash_table_set - gives you the index of a key.
* @ht: the hash table you want to add or update the key/value to
* @key: is the key
* @value: is the value
* Return: 1 if it succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        unsigned long int idx;
        shash_node_t *new, *ne = NULL;

        if (key == NULL || ht == NULL || value == NULL)
                return (0);

        
        idx = key_index((const unsigned char*)key, ht->size);

        value = strdup(value);
        if (value == NULL)
                return (0);
	ne = ht->shead;
        while (ne != NULL)
        {
                if (strcmp(ne->key, key) == 0)
                {
                        free(ne->value);
			ne->value = (char*)value;
                        return (1);
                }
		ne = ne->snext;
        }
        new = malloc(sizeof(shash_node_t));
        if (new == NULL)
                return (0);

        new->key = strdup(key);
        if (new->key == NULL)
        {
                free(new);
                return (0);
        }

        new->value = (char*)value;
        new->next = ht->array[idx];
        ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		ne = ht->shead;
		while (ne->snext != NULL && strcmp(ne->snext->key, key) < 0)
			ne = ne->snext;
		new->sprev = ne;
		new->snext = ne->snext;
		if (ne->snext == NULL)
			ht->stail = new;
		else
			ne->snext->sprev = new;
		ne->snext = new;
	}
        return (1);
}


/**
* shash_table_get - retrieves a value associated with a key.
* @ht: the hash table you want to add or update the key/value to
* @key: is the key
*
* Return: the value associated with the element, or NULL
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new = NULL;

        if (ht == NULL || strlen(key) == 0)
                return (NULL);

	new = ht->shead;
        while (new != NULL)
        {
                if (strcmp(new->key, key) == 0)
                {
                        return (new->value);
                }
                new = new->snext;
        }
        return (NULL);
}



/**
* shash_table_print - prints a hash table.
* @ht: the hash table you want to add or update the key/value to
*/

void shash_table_print(const shash_table_t *sht)
{
shash_node_t *new = NULL;

if (sht == NULL)
return;

new = sht->shead;
printf("{");
while (new != NULL)
{
printf("'%s': '%s'", new->key, new->value);
if (new->snext != NULL)
printf(", ");

new = new->snext;
}
printf("}\n");
}

/**
* shash_table_print_rev - prints a hash table 8n reversed oreder.
* @ht: the hash table you want to add or update the key/value to
*/

void shash_table_print_rev(const shash_table_t *sht)
{
shash_node_t *new = NULL;

if (sht == NULL)
return;

printf("{");
new = sht->stail;
while (new != NULL)
{
printf("'%s': '%s'", new->key, new->value);
if (new->sprev != NULL)
printf(", ");

new = new->sprev;
}
printf("}\n");
}




/**
* shash_table_delete - retrieves a value associated with a key.
* @ht: the hash table we want to delet
*/

void shash_table_delete(shash_table_t *ht)
{
        shash_node_t *new, *ne;
        unsigned long int i;

        for (i = 0; i < ht->size; i++)
        {
                new = ht->array[i];
                while (new != NULL)
                {
                        ne = new;
                        new = new->next;
                        free(ne->key);
                        free(ne->value);
                        free(ne);
                }
        }
        free(ht->array);
        free(ht);
}
