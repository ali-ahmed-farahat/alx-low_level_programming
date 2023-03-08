#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string reverse
 * using recursion
 * @s: The pointer containing string
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
return;
}
}
