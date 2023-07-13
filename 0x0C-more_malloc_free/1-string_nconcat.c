#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * concat_first - concats the 1st string
 * @str: the string to add
 * @new_str: the string to concat to
 * Return: the pointer after concating
 */

char *concat_first(char *str, char *new_str)
{
int i;

for (i = 0; i < strlen(str); i++)
new_str[i] = str[i];

return(new_str);
}


/**
 * string_nconcat - this function concats 2 strings
 * the first fully and the first n bytes of the 2nd
 * @s1: first string
 * @s2: sec string
 * @n: the number of bytes to use from s2
 * Return: pointer to the concated string
 * (NULL) if it failed to allocate memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstring;
int i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n < strlen(s2))
{
newstring = malloc(strlen(s1) + n + 1);

if (newstring == NULL)
return (NULL);

concat_first(s1, newstring);

for (i = 0; i < n; i++)
newstring[strlen(s1) + i] = s2[i];

newstring[strlen(s1) + i] = '\0';
}
else
{
newstring = malloc(strlen(s1) + strlen(s2) + 1);

if (newstring == NULL)
return (NULL);

concat_first(s1, newstring);

for (i = 0; i < strlen(s2); i++)
newstring[strlen(s1) + i] = s2[i];

newstring[strlen(s1) + i] = '\0';
}
return (newstring);
}
