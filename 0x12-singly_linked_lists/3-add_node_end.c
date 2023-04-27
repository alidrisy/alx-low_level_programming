#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: the head
* @str: the new node
* Return: the new address of the element
*/

list_t *add_node_end(list_t **head, const char *str);
{
list_t *new = NULL;
list_t *ne = NULL;
ne = malloc(sizeof(list_t));
int i;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
for (i = 0; str[i]; i++)
;
new->len = i;
new->next = new->next;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
ne = *head;
while (ne->next != NULL)
{
ne = ne->next;
}
ne->next = new;
}
return (new);
}
