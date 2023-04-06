#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int num = 0;
listint_t *current = *head;
listint_t *temp = malloc(sizeof(listint_t));
temp->n = n;
temp->next = NULL;

if (!temp || !head)
return (0);

if (idx == 0)
{
temp->next = *head;
*head = temp;
return (temp);
}


for (num = 0; current && idx - 1 > num; num++)
{

if (i == idx - 1)
{
temp->next = current->next;
current->next = temp;
return (temp);
}

current = current->next;
}
temp->n = n;
temp->next = current->next;
current->next = temp;
return (temp);
}
