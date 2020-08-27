#include "search_algos.h"

/**
 * array_printer - Function that prints the new composition of the array
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @left: Is the index from which the printer needs to start.
 * @right: Is the index where the printer needs to stop.
 *
 * Return: Nothing.
 */

void array_printer(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%d, ", array[left]);
		left++;
	}
	printf("%d\n", array[right]);
}

/**
 * binary_search - Function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: -1 if value is not present in array or if array is NULL, or
 * the first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = (size - 1), mid;

	while (array != NULL && L <= R)
	{
		mid = ((L + R) / 2);
		array_printer(array, L, R);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			R = (mid - 1);
		else
			L = (mid + 1);
	}
	return (-1);
}
