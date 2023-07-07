#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - this function gets the index
 * of the occurence of character that doesn't
 * exist in the other string
 * @s: this is a string in which we search
 * for a character
 * @accept: this is the source of searching
 * Return: the number of bytes in the initial segment of @s which consist only
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] != 32)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	else
	{
		return (c);
	}
}
return (c);
}
