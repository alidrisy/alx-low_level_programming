#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: the head for the link list
*/

void free_list(list_t *head)
{
list_t *new = NULL;
list_t *ne = NULL;

if (!head)
return;

new = head;
while(new != NULL)
{
ne = new->next;
free(new->str);
free(new);
new = ne;
}
head = NULL;
}
