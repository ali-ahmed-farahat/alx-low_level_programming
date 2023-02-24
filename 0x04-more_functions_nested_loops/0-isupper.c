#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - shows whether a character is upper or lower
 * @c: is the chracter which will be tested
 * Return: 1 if upper, 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
