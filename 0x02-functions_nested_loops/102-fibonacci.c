#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers, starting
 * with 1 and 2
 *
 * Return: always 0.
 */

int main(void)
{
	int i = 0;
	unsigned long int n = 1;

	while (i < 50)
	{
		printf("%lu", n);
		if (i < 49)
			printf(", ");
		n += n;
		i++;
	}
	printf("\n");
	return (0);
}
