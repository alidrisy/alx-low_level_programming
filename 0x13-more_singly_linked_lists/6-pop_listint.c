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
new = *head;
n = new->n;
*head = new->next;
free(new);


return (n);
}
