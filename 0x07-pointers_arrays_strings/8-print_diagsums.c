#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: given array
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
		sum1 += a[i];

	for (i = size - 1; i < ((size * size) - 1); i = ((size - 1) + i))
		sum2 += a[i];

	printf("%i, %i\n", sum1, sum2);
}
