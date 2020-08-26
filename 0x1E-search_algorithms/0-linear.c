#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: -1 if value is not present in array or if array is NULL, or
 * the first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (array != NULL && index <= size)
	{
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
