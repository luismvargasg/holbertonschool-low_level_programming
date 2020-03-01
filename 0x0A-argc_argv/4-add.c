#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 *
 * @argv: given argument.
 * @argc: Arguments counter.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}

	if (argc == 1)
		printf("0\n");

	else
		printf("Error\n");

	return (1);
}
