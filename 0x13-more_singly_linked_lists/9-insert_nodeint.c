#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: the first element
* @idx: the index
* @n: the number of element
* Return: the new address
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *ne;
listint_t *new;
x = 0;
new = malloc(sizeof(listint_t));
ne = malloc(sizeof(listint_t));
if (*head == NULL && head == NULL)
return (NULL);

new = *head;
if (idx == 0)
{
if (ne == 0)
return (NULL);

ne->n = n;
ne->next = new;
*head = ne;
return (ne);
}
if (*head == 0)
return (NULL);

while (new != NULL)
{
if (idx - 1  == x)
{
if (ne == 0)
return (NULL);

ne->n = n;
ne->next = new->next;
new->next = ne;
return (ne);
}
x++;
new = new->next;
}

return (NULL);
}
