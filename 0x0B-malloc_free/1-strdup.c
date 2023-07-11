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
int i;

if (str == NULL)
{
fprintf(stderr, "failed to allocate memory\n");
return (NULL);
}

char *ptr = malloc(sizeof(char) * (strlen(str) + 1));
i = 0;

if (ptr == NULL)
{
fprintf(stderr, "failed to allocate memory\n");
return (NULL);
}

while (i < int(strlen(str)))
{
ptr[i] = str[i];
i++;
}

ptr[i] = '\0';

return (ptr);
}
