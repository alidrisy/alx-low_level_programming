#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: address the first element
*/

void free_listint(listint_t *head)
{
listint_t *new, *ne; 

head = new;
while (new != NULL)
{
new->n = ne;
free(new);
new = ne;
}
head = NULL;
}
