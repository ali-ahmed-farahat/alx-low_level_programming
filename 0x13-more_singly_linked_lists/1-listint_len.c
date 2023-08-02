#include "lists.h"

/**
 * listint_len - counting the list
 * @h: the node header ptr
 * Return: number of the nodes printed
 */

size_t listint_len(const listint_t *h)
{
int num = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
