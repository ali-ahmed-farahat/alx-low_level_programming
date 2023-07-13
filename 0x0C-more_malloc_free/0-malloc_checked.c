#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * malloc_checked - this function allocates memory
 * using malloc
 * @b: number of bytes
 * Return: pointer to the memory allocated
 * (98) if it failed to allocate memory
 */

void *malloc_checked(unsigned int b)
{
char *s = malloc(b);

if (s == NULL)
{
int status = 98;
exit(status);
}
return (s);
}
