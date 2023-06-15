#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index
* @head: a pointer to link list
* @idx: is the index where the new node will delete
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *new;
unsigned int x = 1;

if (*head == NULL)
return (-1);

new = *head;
if (index == 0)
{
*head = new->next;
if (new->next == NULL)
return (-1);
new->next->prev = NULL;
free(new);
return (1);
}
while (new != NULL)
{
if (x == index)
{
new->next = new->next->next;
free(new);
return (1);
}
new = new->next;
x++;
}
return (-1);
}

