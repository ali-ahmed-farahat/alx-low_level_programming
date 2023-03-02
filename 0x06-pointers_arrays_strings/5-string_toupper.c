#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_toupper - converts the lower casee
 * to higher
 * @str: the string before
 * Return: String after upper case
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
