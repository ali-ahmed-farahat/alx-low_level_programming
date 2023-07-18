#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function freeing dogs
 * @d: ptr to a struct variable to be freed
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
