#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"
#include <string.h>
int main(void)
{
char a, b, operation;
int (*res)(int, int);
char *get_op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
one = atoi(argv[1]);
two = atoi(argv[3]);
get_op = argv[2];

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
{
	printf("Error\n");
	exit(100);
}
res = get_op_func(get_op);
ans = res(one, two);

printf("%d\n", ans);
return (0);
}

