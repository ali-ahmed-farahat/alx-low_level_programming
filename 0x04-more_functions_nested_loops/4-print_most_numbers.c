#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 1 to 9 - 2and4
 *
 * Return: (0)
 */

void print_most_numbers(void)
{
int x;

for (x = 0; x <= 9; x++)
{
if (x != 2 || x != 4)
putchar(x + '0');
}
putchar('\n');
}
