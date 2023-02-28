#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies one string to the other
 * @dest: the destination of copying
 * @src: the source of copying
 * Return: dest (string)
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
