#include "main.h"
#include <stdio.h>
#include <string.h>


int _strlen_recursion(char *s)
{
	int n;
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
