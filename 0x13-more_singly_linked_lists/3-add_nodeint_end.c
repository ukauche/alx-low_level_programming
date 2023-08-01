#include "lists.h"

/**
 * add_nodeint_end - A functionn that adds a node at the end of a listint_t
 * list
 * @head: Double pointer to the first element in the list
 * @n: data to be inserted
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *link;
	listint_t *temp = *head;

	link = malloc(sizeof(listint_t));
	if (link == NULL)
		return (NULL);

	link->n = n;
	link->next = NULL;

	if (*head == NULL)
	{
		*head = link;
		return (link);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = link;

	return (link);
}
