#include "lists.h"

/**
 * add_nodeint_end - adding new node at the end
 * @head: the node header ptr
 * @n: the number to be added to the new node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *temp = *head;
newNode = malloc(sizeof(listint_t));

if(!newNode)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while(temp->next)
{
temp = temp->next;
}

temp->next = newNode;

return (newNode);
}
