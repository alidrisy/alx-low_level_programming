#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: address the first element
*/

void free_listint(listint_t *head)
{
listint_t *new = NULL;
listint_t *ne = NULL;

new = head;
while (new != NULL)
{
ne = new->next;
free(new);
new = ne;
}
head = NULL;
}
