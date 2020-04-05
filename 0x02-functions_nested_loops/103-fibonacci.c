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
	unsigned long int a = 0, b = 1, res = 0, sum = 0;

	while (res < 4000000)
	{
		res = a + b;
		a = b;
		b = res;
		if (res % 2 == 0)
			sum += res;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
