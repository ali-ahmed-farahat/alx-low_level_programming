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
char *ptr = malloc(sizeof(char) * strlen(str));
int i = 0;

if (ptr == NULL)
{
return (NULL);
}

while (i < strlen(str))
{
ptr[i] = str[i];
i++;
}

ptr[i] = '\0';

return (ptr);
}
