#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - allocating array using malloc from
 * min number to max number
 * @min: this is min number
 * @max: this is max number
 * Return: a pointer to the allocated array, or NULL in failure
 */

int *array_range(int min, int max)
{
int *ptr;
int size;
int current_num;
int i;

if (min > max)
return (NULL);

if (min == max)
size = 1;

size = max - min + 1;

ptr = malloc(sizeof(int) * (size));

if (ptr == NULL)
return (NULL);

current_num = min;

for (i = 0; i < size; i++)
{
ptr[i] = current_num;
current_num++;
}

return (ptr);
}
