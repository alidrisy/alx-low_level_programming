#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: a pointer to link list
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *new = NULL;

while (head != NULL)
{
new = head->next;
free(head);
head = new;
}
}
