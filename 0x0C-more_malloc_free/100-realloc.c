#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocating memory to a new size
 * @ptr: the pointer to prev. allocated memory
 * @old_size: old size of bytes
 * @new_size: new size of bytes
 * Return: a pointer to the reallocated memory, or NULL in failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (new_size == old_size && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
ptr = malloc(new_size);

if (new_size == old_size)
return (ptr);

free(ptr);
ptr = malloc(new_size);

return (ptr);
}
