#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
listint_t *new = NULL;
int x;

if (*head == NULL)
{
return (0);
}
new = (*head)->next;
x = (*head)->n;
free(*head);
*head = new;

return (x);
}
