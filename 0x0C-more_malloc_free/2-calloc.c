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
	char *array;
	unsigned int ia;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}
	for (ia = 0; ia < (size * nmemb); ia++)
		array[ia] = 0;

	return (array);
}
