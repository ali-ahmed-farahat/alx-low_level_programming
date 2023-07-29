#include "lists.h"

/**
 * add_node - function adding new node to the beginning
 * @head: this is the header pointer to first item
 * @str: string to be added in the new node
 * Return: address of added node
 */

list_t *add_node(list_t **head, const char *str)
{
int length = 0;
list_t *new_node;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->next = *head;
new_node->str = strdup(str);

for (; str[length]; length++)
;

new_node->len = length;

*head = new_node;
return (new_node);
}
