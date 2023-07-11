#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function allocating
 * every element of array of custom size
 * @width: the number of element in 1 row
 * @height: the number of rows in the array
 * Return: pointer to the created array (NULL on errors)
 */
int **alloc_grid(int width, int height)
{
int **array_2d;
int i;
int j;

if (width <= 0
|| height <= 0)
return (NULL);

array_2d = (int **) malloc(sizeof(int *) * height);

if (array_2d != NULL)
{
for (i = 0; i < height; i++)
{
array_2d[i] = (int *)malloc(4 * width); /* where 4 is the size of int */

if (array_2d[i] == NULL)
{
while (i >= 0)
{
free(array_2d[i]);
i--;
}
free(array_2d);
return (NULL);
}
else
{
for (j = 0; j < width; j++)
{
array_2d[i][j] = 0;
}
}
}
}
else
return (NULL);

return (array_2d);
}
