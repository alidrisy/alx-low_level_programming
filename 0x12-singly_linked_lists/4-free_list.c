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
if (!head)
return;

free(head->len);
free(head->str);
free(head);
}
