#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: the first address
* Return:  a pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *new = NULL;
listint_t *ne = NULL;

while(*head != NULL)
{
ne = (*head)->next;
(*head)->next = new;
new = *head;
*head = ne;
}
*head = new;
return (new);
}
