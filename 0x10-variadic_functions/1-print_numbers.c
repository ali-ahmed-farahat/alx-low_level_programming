#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - print all numbers passed and seperated them with
 * the separator added as an argument
 * @separator: the separator between the numbers
 * @n: the number of numbers that's gonna be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(list, int));
	if (separator && i < n - 1)
	{
		printf("%s", separator);
	}
}
	printf("\n");
	va_end(list);
}
