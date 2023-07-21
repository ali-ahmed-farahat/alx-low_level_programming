#include "variadic_functions.h"

/**
 * sum_them_all - vaiadic function sum all args
 * @n: number of args
 * Return: sum or (0) in failure
 */

int sum_them_all(const unsigned int n, ...)
{
int i,sum = 0;
va_list args;

if(n == 0)
return (0);

va_start(args, n);

for (i = 0; i < (int)n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
