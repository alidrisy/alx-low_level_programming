#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: a pointer to link list
* @idx: is the index where the new node will add
* @n: the new element
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *ne;
unsigned int x = 0;
int i;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (new == 0)
return (NULL);

if (idx == 0)
{
new->n = n;
new->prev = NULL;
new->next = *h;

if (*h != NULL)
(*h)->prev = new;
*h = new;
return (new);
}

i = dlistint_len(*h);
if (idx == i)
{
new = add_dnodeint_end(h, n);
return (new);
}

ne = *h;
while (ne != NULL)
{
if (x == idx)
{
new->prev = ne->prev;
new->next = ne;
ne->prev->next = new;
ne->prev = new;
return (new);
}
ne = ne->next;
x++;
}
return (NULL);
}
