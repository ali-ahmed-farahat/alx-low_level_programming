#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function ading nodes in the beginning
 * of a list
 * @head: pointer to address of the head of the list
 * @str: the string to be added
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
int len;
char *duplicate;
list_t *l_new;
l_new = malloc(sizeof(list_t));

if (l_new == NULL)
return (NULL);

duplicate = strdup(str);
len = strlen(duplicate);

l_new->len = len;
l_new->str = duplicate;
l_new->next = *head;

*head = l_new;

return (l_new);
}
