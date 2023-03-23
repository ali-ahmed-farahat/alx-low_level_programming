#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name in a specific way
 * @name: pointer keeping the string of the name
 * @f:pointer to print upp or non upp func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
