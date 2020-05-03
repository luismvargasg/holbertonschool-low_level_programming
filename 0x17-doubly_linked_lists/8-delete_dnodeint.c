#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Is the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cursor = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0) /* case: delete first node, set new head */
	{
		if (cursor->next != NULL) /* more than 1 node in the list */
			cursor->next->prev = NULL;
		*head = cursor->next;
		free(cursor);
		return (1); /* succeeded */
	}
	while (i < index && cursor != NULL) /* traversing the list til' idx */
	{
		cursor = cursor->next;
		i++;
	}
	if (i == index && cursor->next != NULL) /* case: node in the middle */
	{
		cursor->next->prev = cursor->prev;
		cursor->prev->next = cursor->next;
		free(cursor);
		return (1); /* succeeded */
	}
	else if (i == index && cursor->next == NULL) /* case: last node, end */
	{
		cursor->prev->next = NULL;
		free(cursor);
		return (1); /* succeeded */
	}
	return (-1); /* failed */
}
