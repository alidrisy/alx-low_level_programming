#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: address the first element
*/

void free_listint2(listint_t **head)
{
listint_t *new = NULL;
listint_t *ne = NULL;

if (!head)
return;

new = *head;
while (new != NULL)
{
ne = new->next;
free(new);
new = ne;
}
*head = NULL;
}
