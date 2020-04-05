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
	unsigned long int a = 0, b = 1, res = 0;

	while (i < 50)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%lu", res);
		if (i < 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
