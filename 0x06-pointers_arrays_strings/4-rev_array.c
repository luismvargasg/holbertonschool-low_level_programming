#include "holberton.h"

/**
 * reverse_array - Function that reverse an array.
 * @a: Given array
 * @n: number of elements of the array
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
