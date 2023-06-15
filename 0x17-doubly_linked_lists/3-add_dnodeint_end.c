#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: a pointer to link list
* @n: a new element to add
* Return: the address of the new list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *ne;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
ne = *head;
while (ne->next != NULL)
{
ne = ne->next;
}
ne->next = new;
new->prev = ne;
}
return (new);
}
