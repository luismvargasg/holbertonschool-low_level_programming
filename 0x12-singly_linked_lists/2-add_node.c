#include "lists.h"
#include <string.h>

/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the linked list.
 * @str: data contained in the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[str_len])
		str_len++;

	new_node->len = str_len;
	new_node->next = *head;
	new_node->str = strdup(str);
	*head = new_node;

	return (new_node);
}
