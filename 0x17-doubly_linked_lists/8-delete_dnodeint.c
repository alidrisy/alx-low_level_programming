#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index
* @head: a pointer to link list
* @index: is the index where the new node will delete
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *new;
unsigned int x = 0;

new = *head;
if (*head == NULL || index > dlistint_len(new))
return (-1);

if (index == 0 && new->next)
{
*head = new->next;
if (new->next == NULL)
return (-1);
new->next->prev = NULL;
free(new);
return (1); }
else if (index == 0 && new)
{
free(new);
*head = NULL;
return (1); }
while (new != NULL)
{
if (x == index)
{
new->prev->next = new->next;
if (new->next)
new->next->prev = new->prev;
free(new);
return (1);
}
new = new->next;
x++;
}
return (-1);
}

