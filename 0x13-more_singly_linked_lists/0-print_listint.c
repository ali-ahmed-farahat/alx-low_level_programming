#include "lists.h"

/**
 * print_listint - printing the list
 * @h: the node header ptr
 * Return: number of the nodes printed
 */

size_t print_listint(const listint_t *h)
{
int num = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
