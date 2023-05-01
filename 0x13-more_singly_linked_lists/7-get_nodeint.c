#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t
* @head: the first address
* @index: the index
* Return: returns the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
x = 0;
while (head != NULL)
{
if (index == x)
{
return (head);
}
x++;
head = head->next;
}
return (NULL);
}
