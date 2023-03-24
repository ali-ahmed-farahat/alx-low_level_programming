#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums the numbers that's entered as arguments
 * @n: the number of arguments that's gonna be entered
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
	sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
