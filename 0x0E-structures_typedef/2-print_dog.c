#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function printing all dog members
 * @d: pointer to struct dog
 * Return: Void
 */

void print_dog(struct dog *d)
{

if (d == NULL)
return;

if ((d -> owner) == NULL)
d -> owner = "(nil)";

if ((d -> name) == NULL)
d -> name = "(nil)";

printf("Name: %s\n", d -> name);
printf("Age: %f\n", d -> age);
printf("Owner: %s\n", d -> owner);

}
