#include "lists.h"

/**
 * add_nodeint - adding new node to the list
 * @head: the node header ptr
 * @n: the number to be added as element of new node
 * Return: number of the nodes printed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));

if(!newNode)
return (NULL);

newNode->n = n;
newNode->next = *head;

*head = newNode;
return (newNode);
}

