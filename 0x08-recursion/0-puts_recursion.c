#include <stdio.h>

/**
 * _puts_recursion - Prints a string recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Anooos";
	_puts_recursion(str);
	return 0;
}
