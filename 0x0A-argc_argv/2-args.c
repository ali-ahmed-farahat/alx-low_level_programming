#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments passed
 * @argv: the vector array containing all strings
 * arguments passed
 * Return: always zero success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

