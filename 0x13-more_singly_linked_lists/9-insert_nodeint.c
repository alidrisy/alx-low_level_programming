#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: the first element
* @idx: the index
* @n: the number of element
* Return: the new address
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *new, *ne;
int i = 0;
x = 0;
new = malloc(sizeof(listint_t));
ne = malloc(sizeof(listint_t));
if (new != NULL || *head != NULL || ne != NULL)
return (NULL);

if (idx == 0)
{
new->n = n;
new->next = *head;
*head = new;
return (new);
}
if (*head == 0)
return (NULL);

new = *head;
while (new != NULL)
{
if (idx - 1  == x)
{
ne->n = n;
ne->next = new->next;
new->next = ne;
return (ne);
i++;
}
x++;
new = new->next;
}
if (i == 0)
return (NULL);

return (NULL);
}
