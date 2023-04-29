#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* @head: the first element address
* Return: the element
*/

int pop_listint(listint_t **head)
{
listint_t *new = NULL;
int x;

if (*head == NULL)
return (0);

new = (*head)->next;
x = (*head)->n;
free(*head);
*head = new;

return (x);
}
