#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: Pointer or NULL if it fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	char *pptr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(newptr);
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = pptr[i];
		}
		free(ptr);
	}
	return (newptr);
}
