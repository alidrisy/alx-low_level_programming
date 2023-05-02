#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - free the listsint
* @h: the first address
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *new;
listint_t *ne;
int x, i;
x = 0;

new = *h;



while (new != NULL)
{
x++;
ne = new;
new = new->next;
free(ne);


if (ne < new)
{
break;
}
if (h == NULL && *h == NULL)
return (0);

*h = NULL;
}
i = malloc(sizeof(listint_t) * x);
return (i);
}
