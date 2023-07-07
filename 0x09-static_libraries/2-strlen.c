#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _strlen - gets the length of a string.
 * @s:variable containing the string.
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
