#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string
 * recursively and ends with a new line
 * @s: is the pointer ccontaining the string
 * Return: none (void)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	printf("\n");
	return;
	}
	printf("%c", *s);
	s++;
	_puts_recursion(s);
}
