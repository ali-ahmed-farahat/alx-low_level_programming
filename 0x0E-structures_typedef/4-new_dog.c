#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function printing dog struct members
 * @age: age of the dog
 * @name: string of the name of the dog
 * @owner: the string name of the dog owner
 * Return: ptr to the new struct variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggie;
int i;

doggie = malloc(sizeof(dog_t));

if (doggie == NULL)
return (NULL);

doggie->owner = malloc(sizeof(owner));

if (doggie->owner == NULL)
{
free(doggie->owner);
return (NULL);
}

doggie->name = malloc(sizeof(name));

if (doggie->name == NULL)
{
free(doggie->name);
free(doggie);
return (NULL);
}

doggie->age = age;

for (i = 0; name[i]; i++)
doggie->name[i] = name[i];
doggie->name[i] = '\0';

for (i = 0; owner[i]; i++)
doggie->owner[i] = owner[i];
doggie->owner[i] = '\0';

return (doggie);
}
