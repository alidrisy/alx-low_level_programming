#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - deletes the node at index
* @head: the first address
* Return: the number of node.
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *new = NULL;
const listint_t *ne = NULL;
int i, x = 0;

if (head == NULL)
exit(98);

new = head;

while (new)
{
printf("[%p] %d\n", (void *)new, new->n);
x++;
new = new->next;
ne = head;
i = 0;
while (i < x)
{
if (ne == new)
{
printf("-> [%p] %d\n", (void *)new, new->n);
return (x);
}
ne = ne->next;
i++;
}
}
return (x);
}
