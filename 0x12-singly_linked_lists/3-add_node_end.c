#include "lists.h"

/**
 * add_node_end - function adding new node at the end
 * @head: this is the header pointer to first item
 * @str: string to be added in the new node
 * Return: address of added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
int length = 0;
list_t *new_node;
list_t *temp;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

temp = (*head);

new_node->next = NULL;
new_node->str = strdup(str);

for (; str[length]; length++)
;

new_node->len = length;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;


return (new_node);
}
