#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: Returns Sum of integers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav = head;

	while (trav != NULL)
	{
		sum = sum + trav->n;
		trav = trav->next;
	}

	return (sum);
}
