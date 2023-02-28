#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of the string
 * @str: contains the string
 * Return: Void
 */
void puts_half(char *str)
{
	unsigned long int i = 0;

	if (strlen(str) % 2 == 0)
	{
		i = strlen(str) / 2;
		while (i < strlen(str))
		{
			printf("%c", str[i]);
			i++;
		}
	}
	else if (strlen(str) % 2 != 0)
	{
		i = ((strlen(str)) / 2) + 1;
		while (i < strlen(str))
		{
			printf("%c", str[i]);
			i++;
		}
	}
}
