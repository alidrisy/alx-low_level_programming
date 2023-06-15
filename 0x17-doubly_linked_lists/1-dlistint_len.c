#include "lists.h"

/**
* dlistint_len - return the number of the elements
* @h: a pointer to link list
* Return: number of element
*/

size_t dlistint_len(const dlistint_t *h)
{
int x = 0;

while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
