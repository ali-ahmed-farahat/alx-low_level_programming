#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: the first string
 * @s2: the secound string
 * Return: if identical 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
