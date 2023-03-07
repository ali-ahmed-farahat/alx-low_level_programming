#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - searches for a character
 * @s: pointer containing the string
 * @c: the character which we search for
 * Return: returns the occurence of a string
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
