#include "3-calc.h"
#include <stdio.h>
/**
 * main - calculator program using ptr to functions
 * @argc: number of arguments passed
 * @argv: string containing arugments passed
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char **argv)
{
int num1, num2;
int result;
char *c = argv[2];
int (*ptr)(int, int);

if (argc != 4)
{
printf("Error\n");
exit (98);
}

if ((*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%') ||
			*(c + 1) != 0)
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);


result = ptr(num1, num2);

printf("%d\n", result);

return (0);
}
