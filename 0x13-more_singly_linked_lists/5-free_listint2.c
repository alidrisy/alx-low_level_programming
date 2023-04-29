#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
listint_t *new = NULL;
listint_t *ne = NULL;

new = *head;
while (new != NULL)
{
ne = new->next;
free(new);
new = ne;
}
head = NULL;
}
