#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocating array using malloc
 * @nmemb: this is the number of array members
 * @size: this is the size of single element in bytes
 * Return: a pointer to the allocated memory, or NULL in failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb <= 0 || size <= 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}
