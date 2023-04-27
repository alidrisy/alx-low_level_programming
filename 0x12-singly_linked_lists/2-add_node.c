#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: the head
* @str: the new node
* Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new = NULL;
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
new->next = *head;
*head = new;

return (new);
}
