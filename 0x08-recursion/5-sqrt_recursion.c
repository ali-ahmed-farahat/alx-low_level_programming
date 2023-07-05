#include <stdio.h>

/**
 * squareRoot - calculates the square root recursively
 * @x: The base
 * @y: The guessed power
 *
 * Return: The resulting square root
 */
int squareRoot(int x, int y)
{
if (y * y < x)
return squareRoot(x, y + 1);

if (y * y == x)
return (y);

else
return (-1);
}

/**
 * _sqrt_recursion - calls the squareRoot function to calculate the square root
 * @n: The number to calculate the square root of
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
    return (squareRoot(n, 1));
}
