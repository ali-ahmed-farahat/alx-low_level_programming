#include "function_pointers.h"

/**
 * array_iterator - function that iterates a specific action
 * @array: array of integers
 * @size: size of array
 * @action: function that will be iterated
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array != NULL
&& size != 0
&& action != NULL)
{
for (i = 0; i < (int)size; i++)
action(array[i]);
}
}
