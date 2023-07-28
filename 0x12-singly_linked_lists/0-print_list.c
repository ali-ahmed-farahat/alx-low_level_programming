#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function printing linked list
 * @h: this is the header pointer to first item
 * Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
