#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * This function can print lists with a loop
 * @head: Pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	unsigned int nodes = 0;

	while (hare)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		nodes++;
		if (hare == tortoise)
		{
			while (hare)
			{
				printf("[%p] %d\n", (void *)tortoise, tortoise->n);
				tortoise = tortoise->next;
				nodes++;
				if (hare == tortoise)
					return (nodes);
			}
		}


	}
	return (nodes);
}
