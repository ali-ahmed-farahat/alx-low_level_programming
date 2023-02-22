#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphbts 10 times
 * Return: Always 0 (Success
 */
void print_alphabet_x10(void)
{
int counter = 0;
char i;
while (counter <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
printf("\n");
counter++;
}
}

