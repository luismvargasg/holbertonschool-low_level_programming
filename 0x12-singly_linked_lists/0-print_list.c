#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
