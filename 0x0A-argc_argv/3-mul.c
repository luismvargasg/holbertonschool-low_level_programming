#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argv: given argument.
 * @argc: Arguments counter.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc > 1)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}

	else
		printf("Error\n");

	return (1);
}
