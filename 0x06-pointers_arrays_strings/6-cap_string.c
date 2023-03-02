#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes the whole string words
 * @str: contains the string
 * Return: the string after capitalization
 */

char *cap_string(char *str)
{
int index = 0;

while (str[index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == '\"' ||
str[index - 1] == '.' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '?' ||
str[index - 1] == '!' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
index == 0)
str[index] -= 32;
index++;
}
return (str);
}
