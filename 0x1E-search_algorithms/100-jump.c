#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: -1 if value is not present in array or if array is NULL, or
 * the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	int low = 0, jump = sqrt(size), high = 0;

	if (array == NULL)
		return (-1);
	while (high < (int)size && array[high] < value)
	{
		low = high;
		high += jump;
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low++;
	}
	return (-1);
}
