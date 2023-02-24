#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - shows whether c is digit or not
 * @c: the value on which it will be tested
 * Return: 0  or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
