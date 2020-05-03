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
	unsigned int i = 1; /* stop 1 step behind in the list */

	if (idx == 0) /* case: new_node needs to be the head */
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (i < idx && temp != NULL) /* traverse list until index -1 */
	{
		temp = temp->next;
		i++;
	}
	if (i == idx && temp->next != NULL) /* hits the expected position */
	{
		new_node->prev = temp; /* points new_node to previous node */
		new_node->next = temp->next; /* points new_node to next node */
		temp->next->prev = new_node; /* points next node to new_node */
		temp->next = new_node; /* points previous node to new_node */
		return (new_node);
	}
	else if (i == idx && new_node->next == NULL) /* case: new_node at end */
		return (add_dnodeint_end(h, n));
	free(new_node);
	return (NULL);
}
