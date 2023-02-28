#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * print_rev - prints reverse of a string.
 * @s:array containing the string.
 * @c:integer that keeps count
 * Return: Always 0 (Success)
 */


void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}
