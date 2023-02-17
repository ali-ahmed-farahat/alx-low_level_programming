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
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
char lower[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
for (i = 0; i < 26; i++)
{
putchar(lower[i]);
}
printf("\n");
return (0);
}
