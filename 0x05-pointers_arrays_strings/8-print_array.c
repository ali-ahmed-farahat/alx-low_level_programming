#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the first n elements
 * @a: contains the array
 * @n: contains the number
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[i]);
	printf("\n");
}
