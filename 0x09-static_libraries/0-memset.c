#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - a function which changes
 * all memory places (first n) to a cnst
 * character
 * @s: a pointer which contains the adress of string
 * @b: the character to which the string will be
 * converted
 * @n: the number of string elements which will
 * be converted
 * Return: the string after modification
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
