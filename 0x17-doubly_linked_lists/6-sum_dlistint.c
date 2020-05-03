#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cursor = head;

	while (head != NULL && cursor->next != NULL)
	{
		cursor = cursor->next;
		sum += cursor->n;
	}
	return (sum);
}
