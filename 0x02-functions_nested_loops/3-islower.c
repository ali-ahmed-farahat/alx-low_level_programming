#include "main.h"
#include <stdio.h>

/**
 * _islower - prints whether the letter is lower or upper
 * @c: The character to be checked
 * Return: 0 or 1 (depending on the letter)
 */

int _islower(char c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
