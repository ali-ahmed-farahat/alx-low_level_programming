#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function printing + counting the
 * numbers of list
 * @h: the first element on the list
 * Return: the number of elements in the list
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
h = h->next;
}
return (n);
}
