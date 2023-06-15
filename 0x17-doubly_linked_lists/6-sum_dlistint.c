#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t
* @head: a pointer to link list
* Return: the sum of node
*/

int sum_dlistint(dlistint_t *head)
{
int x = 0;

while (head != NULL)
{
x += head->n;
head = head->next;
}
return (x);
}
