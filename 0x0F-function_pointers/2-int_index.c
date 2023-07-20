#include "function_pointers.h"

/**
 * int_index - function using other function
 * to find the index of a specific num (if exist)
 * @array: the array of int to search in
 * @size: the size of the array
 * @cmp: comparing function
 */
 
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (array != NULL)
{

for (i = 0; i < size; i++)
{

if (cmp(array[i]))
return (i);

}

}

return (-1);
}
