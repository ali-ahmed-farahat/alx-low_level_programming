#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function counting no of nodes
 * @h: header to the first node 
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
