#include "lists.h"

/**
 * list_len - function returning length of linked list
 * @h: this is the header pointer to first item
 * Return: the length of the list
 */

size_t list_len(const list_t *h)
{
list_t *current;
size_t counter = 0;

current = (list_t*)h;

while (current != NULL)
{
counter++;
current = current->next;
}

return (counter);
}
