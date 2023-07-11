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
unsigned int i;

if (str == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}

char *ptr = malloc(sizeof(char) * (strlen(str) + 1));

if (ptr == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
else
{
while (i < strlen(str))
{
ptr[i] = str[i];
i++;
}

ptr[i] = '\0';

return (ptr);
}
}
