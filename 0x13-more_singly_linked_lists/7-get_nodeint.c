#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a listint_t
 * linked list
 * @head: Pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: Pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *trav = head;

	while (trav != NULL && i < index)
	{
		trav = trav->next;
		i++;
	}

	return (trav ? trav : NULL);
}
