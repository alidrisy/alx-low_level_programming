#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free dogs
* @d: the dog pointer
*/

void free_dog(dog_t *d)
{
if (!d)
return;

free(d->name);
free(d->owner);
free(d);

}
