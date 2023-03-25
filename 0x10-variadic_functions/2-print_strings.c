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
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
