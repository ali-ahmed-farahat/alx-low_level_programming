#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that gets the length of
 * a list
 * @h: the first element in the list
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
