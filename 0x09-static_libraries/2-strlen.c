#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
	int length = 0;
	while (*s++)
		length++;
	return (length);
}
