#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t
 * list
 * @head: pointer to the first node in the list
 * @n: data to be updated
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link;

	link = malloc(sizeof(listint_t));
	if (link == NULL)
		return (NULL);

	link->n = n;
	link->next = *head;
	*head = link;

	return (link);
}
