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
if (h == NULL)
return (0);

while (new)
{
x++;
ne = new;
new = new->next;
free(ne);

if (ne < new)
{
break;
}
*h = NULL;
}
return (x);
}
