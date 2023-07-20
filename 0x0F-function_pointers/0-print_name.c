#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function calling other function
 * using function pointers
 * @name: string containing the name to be printed
 * @f: pointer to the function to be called
 */

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}
