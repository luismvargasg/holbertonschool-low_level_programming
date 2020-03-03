#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the memory to print.
 * @c: Given character.
 *
 * Return: 0 or array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (size > 0)
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
