#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at a
 * given position.
 * @h: Pointer to the head of the list.
 * @idx: Is the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: Data to the store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (i < idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx && temp->next != NULL)
	{
		new_node->prev = temp;
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else if (i == idx && new_node->next == NULL)
		return (add_dnodeint_end(h, n));
	free(new_node);
	return (NULL);
}
