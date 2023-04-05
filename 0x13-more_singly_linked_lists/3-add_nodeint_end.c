#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = *head;
listint_t *newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while ((ptr->next) != NULL)
ptr = ptr->next;
ptr->next = newnode;
return (newnode);
}
