#include "dog.h"
/**
 * init_dog - function intializing a dog struct variable
 * @d: pointer to the variable of struct
 * @name: the string containing the name
 * @age: the int of age
 * @owner: string containing the name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->age = age;
d->name = name;
d->owner = owner;
}
