#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 *
 * @argv: given argument.
 * @argc: Arguments counter.
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int ia;
	int ib;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		for (ia = 1; ia < argc; ia++)
		{
			for (ib = 0; argv[ia][ib] != '\0'; ib++)
			{
				if (argv[ia][ib] < '0' || argv[ia][ib] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[ia]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
