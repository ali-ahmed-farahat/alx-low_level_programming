#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the digits from 0 to 9
 * Return: ALways 0 (Success)
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
