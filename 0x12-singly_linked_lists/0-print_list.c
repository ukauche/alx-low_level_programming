#include "lists.h"

/**
 * print_list - prints all the elements in a singly linked list
 * @h: head pointer to the first node of list
 *
 * Return: Total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
int a;
if (h == NULL)
return (0);

for (a = 1; h->next != NULL; a++)
{
if (h->str == NULL)
printf("[%u] %s\n", h->len, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
printf("[%u] %s\n", h->len, h->str);
return (a);

}
