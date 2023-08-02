#include "lists.h"

/**
 * print_listint - printing the list
 * @h: the node header ptr
 * Return: number of the nodes printed
 */

int pop_listint(listint_t **head)
{
listint_t *temp = (*head);
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
}
