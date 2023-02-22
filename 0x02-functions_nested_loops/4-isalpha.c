#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - detects whether is it alpha or not
 * @c: the character to be checked
 * Return: 1 for alphas and 0 for otherwise
 */

int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
