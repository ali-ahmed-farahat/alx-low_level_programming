#include "lists.h"

/**
 * free_listint - freeing the list
 * @head: the node header ptr
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
