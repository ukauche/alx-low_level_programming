#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: Double pointer to the first node in the list
 *
 * Return: Double pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *link = NULL;

	while (*head != NULL)
	{
		link = (*head)->link;
		(*head)->link = former;
		former = *head;
		*head = link;
	}

	*head = former;

	return (*head);
}
