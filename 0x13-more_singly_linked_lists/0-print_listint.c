#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a linked list
 * @h: Pointer to the head element of typedef listint_t
 *
 * Return: Total nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		printf("This list is empty");

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
