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
int string_length = strlen(str);
char *ptr = malloc(sizeof(char) * (string_length + 1));
int i = 0;

if (str == NULL)
{
printf("failed to allocate memory\n");
return NULL;
}
  
if (ptr == NULL)
{
printf("failed to allocate memory");
return (NULL);
}

while (i < string_length)
{
ptr[i] = str[i];
i++;
}

ptr[i] = '\0';

return (ptr);
}
