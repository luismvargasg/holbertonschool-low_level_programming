#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Given integer.
 * @size: Given size.
 *
 * Return: a pointer to the allocated memory or NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
