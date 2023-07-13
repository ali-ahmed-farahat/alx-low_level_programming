#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * malloc_checked - this function allocates memory
 * using malloc
 * @b: this is the variable to allocate memory to
 * Return: pointer to the memory allocated
 * (98) if it failed to allocate memory
 */

void *malloc_checked(unsigned int b)
{
unsigned int *s = malloc(sizeof(unsigned int));

if (s == NULL)
{
int status = 98;
exit(status);
}
return (s);
}
