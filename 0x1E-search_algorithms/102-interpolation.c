#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - Function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: -1 if value is not present in array or if array is NULL, or
 * the first index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), pos = 0;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			low = (pos + 1);
		else
			high = (pos - 1);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
	if (pos > size)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
