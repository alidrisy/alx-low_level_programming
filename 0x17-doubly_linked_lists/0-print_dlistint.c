#include "lists.h"

/**
* print_dlistint - print the elements of the linked list
* @h: a pointer to link list
* Return: number of element
*/

size_t print_dlistint(const dlistint_t *h)
{
int x = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
