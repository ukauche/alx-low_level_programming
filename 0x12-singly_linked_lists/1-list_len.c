#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node in the list_t list
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
int a;
if (h == NULL)
return (0);

for (a = 1; h->next != NULL; a++)
h = h->next;
return (a);

}
