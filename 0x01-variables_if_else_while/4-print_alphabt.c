#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet
 * Return: ALways 0 (Success)
 */
int main(void)
{
char q, e, low;
int i;
q = 'q';
e = 'e';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
{
putchar(low);
}
}
putchar("\n");
return (0);
}
