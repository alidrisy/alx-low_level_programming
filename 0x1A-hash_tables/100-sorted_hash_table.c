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
        unsigned long int idx, i;
        char *str_v;
        shash_node_t *new;

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
        new = malloc(sizeof(shash_node_t));
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


/**
* shash_table_get - retrieves a value associated with a key.
* @ht: the hash table you want to add or update the key/value to
* @key: is the key
*
* Return: the value associated with the element, or NULL
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
        unsigned long int indx;

        if (ht == NULL || strlen(key) == 0)
                return (NULL);

        indx = key_index((const unsigned char *)key, ht->size);

        if (ht->array[indx] == NULL)
                return (NULL);

        while (ht->array[indx] != NULL)
        {
                if (strcmp(ht->array[indx]->key, key) == 0)
                {
                        return (ht->array[indx]->value);
                }
                ht->array[indx] = ht->array[indx]->next;
        }
        return (NULL);
}



/**
* shash_table_print - prints a hash table.
* @ht: the hash table you want to add or update the key/value to
*/

void shash_table_print(const shash_table_t *ht)
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
if (ht->array[i]->next != NULL)
printf(", ");

x++;
}
if (ht->array[i + 1] != NULL && x)
printf(", ");
}
printf("}\n");
}

/**
* shash_table_print_rev - prints a hash table 8n reversed oreder.
* @ht: the hash table you want to add or update the key/value to
*/

void shash_table_print_rev(const shash_table_t *ht)
{
unsigned long int i;
int x = 0;

if (ht == NULL)
return;

printf("{");
for (i = ht->size; i > 0; i--)
{
if (ht->array[i] != NULL)
{
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
if (ht->array[i]->next != NULL)
printf(", ");

x++;
}
if (ht->array[i - 1] != NULL && x)
printf(", ");
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
