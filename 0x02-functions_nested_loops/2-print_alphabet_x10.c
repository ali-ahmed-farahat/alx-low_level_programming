#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphbts
 * Return: Always 0 (Success
 */

void print_alphabet(void)
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

