#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: a pointer to link list
* @n: a new element to add
* Return: the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

if (*head != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
