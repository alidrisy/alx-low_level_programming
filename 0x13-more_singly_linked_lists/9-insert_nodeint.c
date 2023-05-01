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
listint_t *ne;
listint_t *new;
int i = 0;
x = 0;
new = malloc(sizeof(listint_t));
ne = malloc(sizeof(listint_t));

new = *head;

if (idx == 0)
{
ne->n = n;
ne->next = *head;
*head = ne;
return (ne);
}
if (*head == 0)
return (NULL);

while (new != NULL || *head != NULL || ne != NULL)
{
if (idx - 1  == x)
{
ne->n = n;
ne->next = new->next;
new->next = ne;
return (ne);
i = 1;
}
x++;
new = new->next;
}
if (i == 0)
return (NULL);

return (NULL);
}
