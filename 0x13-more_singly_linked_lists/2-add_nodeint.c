#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint - adds node in the beginning of list
 * @head: pointer to the first element of the list
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t* newnode;
newnode = malloc(sizeof(listint_t));

if (!newnode)
return (NULL);

newnode->next = *head;
newnode->n = n;
*head = newnode;

return (newnode);
}
