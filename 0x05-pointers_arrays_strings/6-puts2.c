#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * puts2 - prints reverse of a string.
 * @s:array containing the string.
 * Return: Void (Success)
 */


void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}

