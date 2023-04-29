#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: the address first element
* @n: the first element
* Return: the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *ne;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if(*head == NULL)
{
*head = new;
}
else
{
ne = *head;
while (ne->next != NULL)
{
ne = ne->next;
}
ne->next = new;
}
return (new);
}
