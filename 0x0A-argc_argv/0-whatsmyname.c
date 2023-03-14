#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this function prints the name of the program
 * @argc: this counts the arguments
 * @argv: array of strings of the arguments passed
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
