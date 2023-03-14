#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the result of multiplication
 * of two arguments.
 * @argc: the number of arguments passed
 * @argv: the vector array containing all strings
 * arguments passed
 * Return: zero success, 1 if error
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
	}
}
