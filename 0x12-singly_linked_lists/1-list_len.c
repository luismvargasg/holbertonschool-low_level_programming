#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: numbers ot elements in the list_t.
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
