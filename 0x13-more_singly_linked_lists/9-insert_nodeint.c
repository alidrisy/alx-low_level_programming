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
x = 0;
listint_t *new;
listint_t *ne;
  
new = malloc(sizeof(listint_t));
ne = malloc(sizeof(listint_t));

new = *head;

if (idx == 0)
{
ne->n = n;
ne->next = new;
new = ne;
return (ne);
}
while (new != NULL)
{
if (idx - 1  == x)
{
ne->n = n;
ne->next = new->next;
new->next= ne;
return (ne);
}
x++;
new = new->next;
}
return (NULL);
}
