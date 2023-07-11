#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function freeing allocated array
 * @grid: the whole array
 * @height: the number of rows in the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i, j;
if (height <= 0)
    return;

if (grid != NULL)
{
for (i = height - 1; i >= 0; i--)
{

if (grid[i] != NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid)
return;
}
}
}
}
