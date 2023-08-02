#include "lists.h"

/**
 * get_nodeint_at_index - getting node at certain index
 * @head: the ptr to header
 * @index: the index of the node needed
 * Return: the node in that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int i;
if (head == NULL)
return (NULL);

if (index < 0)
return (NULL);

for (i = 0; i < index; i++)
head = head->next;

return (head);
}
