#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change for an
 * amount of money.
 *
 * @argv: given argument.
 * @argc: Arguments counter.
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int coins_num = 0;
	int value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 2)
	{
		value = atoi(argv[1]);

		while (value > 0)
		{
			if (value >= 25)
				value = value - 25;

			else if (value >= 10)
				value = value - 10;

			else if (value >= 5)
				value = value - 5;

			else if (value >= 2)
				value = value - 2;

			else if (value >= 1)
				value = value - 1;
			coins_num = coins_num + 1;
		}
	}
	printf("%d\n", coins_num);
	return (0);
}
