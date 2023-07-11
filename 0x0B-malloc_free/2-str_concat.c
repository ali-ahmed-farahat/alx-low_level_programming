#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - returning pointer to a new string which is a concat of 2 strings
 * @s1: the first string
 * @s2: the secound string
 * Return: pointer to the result string
 */

char *str_concat(char *s1, char *s2)
{
int i;
int j;
int len1;
int len2;
char *string_new;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

string_new = (char *)malloc(1 * (len1 + len2 + 1));

if (string_new == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
string_new[i] = s1[i];
}

for (j = 0; j < len2; j++)
{
string_new[len1 + j] = s2[j];
}

string_new[len1 + j] = '\0';

return (string_new);
}
