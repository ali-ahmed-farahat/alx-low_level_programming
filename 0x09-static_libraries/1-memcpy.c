#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - function that copies the first n
 * characters from src to dest
 * @dest: the destination of copying
 * @src: the source of copying
 * @n: the number of charcters copied
 * Return: the string dest after copying
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
