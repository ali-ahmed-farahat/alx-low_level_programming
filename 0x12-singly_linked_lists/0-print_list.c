#include "lists.h"

/**
 * print_list - function printing linked list
 * @h: this is the header pointer to first item
 * Return: the number of elements printed
 */

size_t print_list(const list_t *h)
{
list_t *current;
size_t counter = 0;
int cur_len;
char *cur_str;

current = h;

while (current != NULL)
{
cur_len = current->len;
cur_str = strdup(current->str);

if (current->str == NULL)
{
cur_len = 0;
cur_str = "(nil)";
}

printf("[%d] %s\n", cur_len, cur_str);
counter++;
current = current->next;
}

return (counter);
}
