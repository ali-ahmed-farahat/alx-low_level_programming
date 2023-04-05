#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
listint_t *temporary;

while (head)
{
temporary = head;
free(head);
head = temporary;
}
}
