#include "variadic_functions.h"

/**
 * print_numbers - printing numbers variadicaly
 * @seperator: string seperator
 * @n: number of ints
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i = 0;
    va_list args;

    if (n == 0)
        return;

    va_start(args, n);

    for (i = 0; i < n - 1; i++)
    {
        printInt(va_arg(args, int));
        fputs(separator, stdout);
    }
    printInt(va_arg(args, int));
    va_end(args);
}
