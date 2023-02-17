#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - prints the alphabet
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
printf("\n");
return (0);
}
