#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a newly allocated space in
 * @width: given value.
 * @height: given value.
 * Return: pointer or NULL if it's fail.
 */

int **alloc_grid(int width, int height)
{
	int **array, ia, ib;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
		}

	for (ia = 0; ia < height; ia++)
	{
		array[ia] = malloc(sizeof(int) * width);

		if (array[ia] == NULL || array == NULL)
		{
			for (ia = 0; ia < height; ia++)
			{
				free(array[ia]);
				free(array);
			}
			return (NULL);
		}
	}

	for (ia = 0; ia < height; ia++)
	{
		for (ib = 0; ib < width; ib++)
			array[ia][ib] = 0;

	}
	return (array);
}
