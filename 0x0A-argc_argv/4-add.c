#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* main - adds positive numbers.
* @argc: the number of arguments passed
* @argv: the vector array containing all strings
* arguments passed
* Return: zero success, 1 if error
*/
int main(int argc, char *argv[])
{
int i;
unsigned int k;
int sum = 0;
char *e;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];

for (k = 0; k <strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
