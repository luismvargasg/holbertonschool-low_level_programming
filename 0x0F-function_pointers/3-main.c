#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that performs simple operations.
 * @argc: askgh<sg
 * @argv: agsgag
 *
 * Return: asgsga
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc <= 3)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);

	return (0);
}
