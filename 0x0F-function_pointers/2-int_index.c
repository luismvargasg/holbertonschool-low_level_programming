#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: Given array.
 * @size: is the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values.
 * Return: the index of the first element for which the cmp function does
 * not return 0; if no element matches || size <= 0: return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (*cmp)
	{
		while (size > 0 && i < size && array != NULL)
			if (cmp(array[i++]))
				return (i - 1);
	}

	if (array[i] == '\0')
		return (-1);

	return (-1);
}
