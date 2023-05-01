#include <stdio.h>
#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: the first address
* Return: the sum
*/

int sum_listint(listint_t *head)
{
int x = 0;
if (!head)
return (0);

while (head != NULL)
{
x += head->n;
head = head->next;
}
return (x);
}
