#include <stdio.h>

/**
 * squareRoot - calculates the squareroot recursively
 * @x: The base
 * @y: The guessed power
 * Return: the result square root
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
 * _sqrt_recursion - calls squareRoot function to process guesses
 * @n: the number to calculate the square root to
 * Return: the result square root
 */
int _sqrt_recursion(int n)
{
return squareRoot(n, 1);
}
