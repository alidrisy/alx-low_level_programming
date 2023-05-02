#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint_safe - free the listsint
* @h: the first address
* Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *new = NULL;
listint_t *ne = NULL;
size_t x = 0;
new = *h;
if (!h)
return (0);

while (new != NULL)
{
ne = new;
new = new->next;
free(ne);
x++;
if (ne < new)
break;
}
*h = NULL;
return (x);
}
