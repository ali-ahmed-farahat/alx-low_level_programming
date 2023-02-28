#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts - gets the length of a string.
 * @str:variable containing the string.
 * Return: Always 0 (Success)
 */


void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
