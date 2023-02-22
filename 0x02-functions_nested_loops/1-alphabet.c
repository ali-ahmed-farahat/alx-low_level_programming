#include <stdio.h>

/**
 * main -function that prints alpt
 * print_alphabet - prints the alphbts
 * Return: Always 0 (Success
 */

void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
}
