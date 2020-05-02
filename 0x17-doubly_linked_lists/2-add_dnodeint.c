#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Data to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if ((*head) != NULL) /* check if the list is not empty != first first node */
		(*head)->prev = new_node;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
