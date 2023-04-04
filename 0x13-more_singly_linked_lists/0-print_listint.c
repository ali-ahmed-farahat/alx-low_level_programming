#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
int num;

for (num = 0; h != NULL; num++)
{
    printf("%d\n", h->n);
    h = h->next;
}

return (num);
}
