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
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", va_arg(ap, int));
		}
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
