#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function creates array dynamically using malloc
 * @size: the size of array
 * @c: the characer used to fill the array
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *ptr = (char *)malloc(sizeof(char) * size);
unsigned int i = 0;
if (ptr == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}

else
{
while (i < size)
{
ptr[i] = c;
i++;
}

ptr[i] = '\0';

return (ptr);
}
}
