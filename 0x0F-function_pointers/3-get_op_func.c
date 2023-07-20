#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get operation function
 * @s: operator passed as string
 * Return: ptr to the function that corrosponds the operator given
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"%", op_mod},
{"*", op_mul},
{"+", op_add},
{"-", op_sub},
{"/", op_div}
};

int i = 0;

while (ops[i].op != NULL)
{

if (*ops[i].op == *s)
return (ops[i].f);

i++;
}
return (NULL);
}
