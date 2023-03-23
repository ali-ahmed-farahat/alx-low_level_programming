#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - fiunction assigning array elements to pointer
 * @array: pointer containing the array
 * @size: size of the array
 * @action: the pointer we are working on
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
