#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
int len;
char *duplicate;
list_t *l_new, *last;
l_new = malloc(sizeof(list_t));

*head = l_new;

if (l_new == NULL)
return (NULL);
duplicate = strdup(str);
len = strlen(duplicate);

if (str == NULL)
{
free(new);
return (NULL);
}

l_new->len = len;
l_new->str = duplicate;
l_new->next = *head;

if (*head == NULL)
*head = l_new;
else
{
last = *head;

while (last->next != NULL)
last = last->next;
last->next = l_new;
}
return (*head);
}
