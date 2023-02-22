#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - detects whether is it +ve, -ve or 0
 * @n: the number to be checked
 * Return: 1 for +ve and 0 for zero and -1 for -ve
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar(45)
return (-1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("+");
return (1);
}
}

