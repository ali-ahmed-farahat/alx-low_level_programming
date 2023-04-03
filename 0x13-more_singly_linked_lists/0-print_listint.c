#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function printing linked list
 * @h: the header pointer pointing 1st element
 * Return: the number of nodes in the list
 */
 
size_t print_listint(const listint_t *h)
{
int num;

for (num = 0;h != NULL; num++)
{
    printf("%d\n", h -> n);
    h = h->next;
}
return num;
}
