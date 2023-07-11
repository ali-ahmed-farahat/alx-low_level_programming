#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a duplicate string
 * @str: the original string
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
char *ptr;
int index, len;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;
ptr = malloc(sizeof(char) * (len + 1));

if (ptr == NULL)
return (NULL);

for (index = 0; str[index]; index++)
{
ptr[index] = str[index];
}

cpy[len] = '\0';

return (ptr);
}
