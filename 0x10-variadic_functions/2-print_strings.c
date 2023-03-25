#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints any number of strings
 * @separator: separator between strings
 * @n: the number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *airport;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	airport = va_arg(ap, char *);
	printf("%s", airport);
	if (separator && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ap);
}
