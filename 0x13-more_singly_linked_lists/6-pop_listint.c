#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
listint_t *new = NULL;
int n;

if (*head == NULL)
{
return (0);
}
new = (*head)->next;
n = (*head)->n;
free(*head);
*head = new;

return (n);
}
