#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * @head: Double pointer to be freed and set to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *travs;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		travs = (*head)->next;
		free(*head);
		*head = travs;
	}

	*head = NULL;
}
