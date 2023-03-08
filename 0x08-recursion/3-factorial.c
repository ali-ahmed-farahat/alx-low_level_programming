#include <stdio.h>
#include "main.h"

/**
 * factorial - calculates the fact of a number
 * @n: the numebr we're calculating the fact of
 * Return: The result of this operation
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1 || n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
