#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked
 * listint_t list
 * @h: linked list of type listint_t to traverse
 *
 * Return: Return total nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
