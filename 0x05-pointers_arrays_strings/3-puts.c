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
while(*str++)
{
putchar(*str);
}
putchar('\n');
}
