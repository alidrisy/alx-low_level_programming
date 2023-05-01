#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index
* @head: the first address
* @index: the index
* Return: 1 at succeed -1 at failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *new;
listint_t *ne;

unsigned int x;
new = malloc(sizeof(listint_t));


new = *head;
if (index == 0)
{
*head = new->next;
free(new);
return (1);
}

while (new)
{
if (x == index - 1)
{
new = new->next;
if (new)
{
ne = new->next;
new->next = ne->next->next;
free(ne);
return (-1);
}
}
x++;
}
return (-1);
}
