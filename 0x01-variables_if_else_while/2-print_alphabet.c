#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet.
 * Return: ALways 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
printf("\n");
return (0);
}
