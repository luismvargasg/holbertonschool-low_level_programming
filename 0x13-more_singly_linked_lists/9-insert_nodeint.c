#include "lists.h"

/**
 * insert_nodeint_at_index - func. that inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Number to store in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cursor;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	cursor = *head;

	for (; i < idx; i++)
		cursor = cursor->next;

	new_node->next = cursor->next;
	cursor->next = new_node;
	new_node->n = n;

	return (new_node);
}
