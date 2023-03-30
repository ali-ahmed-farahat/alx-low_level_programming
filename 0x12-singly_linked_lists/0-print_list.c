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
size_t n = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

n++;
h = (h->next);
}
return (n);
}
