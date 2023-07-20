#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function calling other function
 * using function pointers
 * @name: string containing the name to be printed
 * @f: pointer to the function to be called
 */

void print_name(char *name, void (*f)(char *))
{
if (f != 0 && name != 0)
f(name);
}
