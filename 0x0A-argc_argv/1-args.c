#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments passed
 * @argv: the vector array containing all strings
 * arguments passed
 * Return: always zero success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
