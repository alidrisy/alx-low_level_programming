#include "dog.h"
#include <stdlib.h>

/**
* _copy - copy a string
* @b: char
* @x: char
*/

void _copy(char *b, char *x)
{
int i;
for (i = 0; x[i]; i++)
b[i] = x[i];
b[i] = '\0';
}

/**
* new_dog - prints a struct dog
* @name: pointet to struct dog
* @age: int
* @owner: char
* Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x;
int v, b;

for (v = 0; name[v]; v++)
;
for (b = 0; owner[b]; b++)
;

x = malloc(sizeof(dog_t));

if (!x)
{
return (NULL);
}
x->name = malloc(v + 1);
if (!x->name)
{
free(x);
return (NULL);
}
x->owner = malloc(b + 1);
if (!x->owner)
{
free(x->name);
free(x);
return (NULL);
}
_copy(x->name, name);
_copy(x->owner, owner);
x->age = age;
return (x);
}
