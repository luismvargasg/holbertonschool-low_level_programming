#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Is the index of the node, starting from 0.
 *
 * Return: The data stored at the node or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head->next != NULL && i < index)
		{
			cursor = cursor->next;
			i++;
		}
		if (i == index)
			return (cursor);
	}
	return (NULL);
}
