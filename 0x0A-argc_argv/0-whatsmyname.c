#include <stdio.h>

/**
 * main - program that prints its name.
 * @argv: given argument.
 * @argc: Arguments counter.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
