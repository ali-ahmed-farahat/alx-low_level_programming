#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
void counter(int *num, int *coins, int coin_value)
{

if (*num >= coin_value)
{
*coins += *num / coin_value;
*num %= coin_value;
}

else
return;
}

int coins(int num)
{
int coin_num = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

counter(&num, &coin_num, 25);
counter(&num, &coin_num, 10);
counter(&num, &coin_num, 5);
counter(&num, &coin_num, 2);
counter(&num, &coin_num, 1);

return (coin_num);
}



int main(int argc, char *argv[])
{
int num;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
for (i = 0; argv[1][i] != '\0'; i++)
{
/* checking if the passed argument is digit */
if (!isdigit(argv[1][i]))
{
printf("Error: Invalid argument. Please provide a numeric argument.\n");
return 1;
}
}
num = atoi(argv[1]);

printf("%d\n", coins(num));
return (0);
}
