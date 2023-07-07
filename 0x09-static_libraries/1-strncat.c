#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - appends a string to another one
 * @dest: the string appended to
 * @src: the source string
 * @n: the number of bytes
 * Return: The dest string after the concatination
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
