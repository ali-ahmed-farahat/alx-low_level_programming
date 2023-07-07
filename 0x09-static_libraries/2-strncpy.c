#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string to another one
 * @dest: the string appended to
 * @src: the source string
 * @n: the number of bytes
 * Return: The dest string after the concatination
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
