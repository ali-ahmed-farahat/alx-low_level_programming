#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * op_add - adds two ints
 * @a: num1
 * @b: num2
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs two ints
 * @a: num1
 * @b: num2
 * Return: the sub
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - muls two ints
 * @a: num1
 * @b: num2
 * Return: the mul
 */

int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divs two ints
 * @a: num1
 * @b: num2
 * Return: the div of th two
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - mods two ints
 * @a: num1
 * @b: num2
 * Return: the mod of two nums
 */
int op_mod(int a, int b);
{
return (a % b);
}
