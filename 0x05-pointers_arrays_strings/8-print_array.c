#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Array
 * @n: number of elements.
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d", a[i++]);
		if (i + 1 <= n)
		printf(", ");
	}
	printf("\n");
}
