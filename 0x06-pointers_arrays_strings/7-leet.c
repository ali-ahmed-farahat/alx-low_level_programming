#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * leet - converts normal string to 1337
 * @str: string
 * Return: string after this process (str)
 */

char *leet(char *str)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; j++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}


