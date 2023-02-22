#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural nums from 0 to 98
 * @n: variable in which the number is stored
 * Return: none
 */

void print_to_98(int n)
{
if (n < 98)
{
for ( ; n < 98 ; n++)
{
printf("%d, ", n);
}
printf("98");
}
else if (n > 98)
{
for ( ; n > 98 ; n--)
{
printf("%d, ", n);
}
printf("98");
}
else if (n == 98)
{
	printf("98");
}
printf("\n");
}
