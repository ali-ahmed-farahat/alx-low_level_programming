#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - function printing list + return
 * number of it's elements
 * @h: the first list element
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
int n = 0;
list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", current->len, current->str);

n++;
current = (current->next);
}
return (n);
}
