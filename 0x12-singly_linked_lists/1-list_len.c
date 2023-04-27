#include "lists.h"
#include <stdio.h>

/**
* list_len - prints all the elements of a list_t list.
* @h: the pointer to the head
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
int i = 0;
while (h)
{
if (h->str == NULL)
{
i++;
}
else
{
i++;
}
h = h->next;
}
return (i);
}
