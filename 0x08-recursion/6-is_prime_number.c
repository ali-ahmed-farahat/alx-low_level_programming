#include <stdio.h>
/**
 * prime_check - function checking if a number is prime or not recursively
 * @n: the number to be checked
 * @x: the number to test as a divisor
 * Return: (0) if not prime, (1) prime
 */

int prime_check(int n, int x)
{
if(x == 1 || x == 0)
return (1);

if (n % x == 0)
return (0);

return (prime_check(n, x - 1));
}

/**
 * is_prime_number - function checking of number is prime or not recursively
 * @n: the number to be checked
 * Return: (0) if not prime, (1) if prime
 */

int is_prime_number(int n)
{
if (n == 0 || n == 1 || n == -1)
return (0);

return (prime_check(n, n / 2));
}
