#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: Given min number.
 * @max: given max number.
 * Return: pointer to the newly created array or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int *array, len = 0, i = 0;

	if (min > max)
		return (NULL);

	len = max - min;

	array = malloc((len + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len + 1); i++)
		array[i] = min++;

	return (array);
}
