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
if (h == NULL)
return (0);
new = *h;
while (new != NULL)
{
ne = new;
new = new->next;
free(ne);
x++;
if (new > ne)
break;
}
*h = NULL;
return (x);
}
