#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calculate the power of number
 * @x: the number we caculate the power to
 * @y: the power raised to
 * Return: the result of x power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
