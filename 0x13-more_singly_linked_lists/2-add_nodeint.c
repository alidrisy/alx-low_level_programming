#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: the address first element
* @n: the first element
* Return: the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = NULL;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
