#include "main.h"
#include <stdio.h>

#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * swap_int - swaps the values of two integers.
 * @b: one variable of to forwhom the swap
 * @a: the other variable.
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
