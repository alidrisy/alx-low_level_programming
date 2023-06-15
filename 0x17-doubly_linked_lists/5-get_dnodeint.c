#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: a pointer to link list
* @index: the index of the node
* Return: the address of the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *new = NULL;
unsigned int x = 0;
while (head != NULL)
{
if (x == index)
new = head;
head = head->next;
x++;
}
return (new);
}
