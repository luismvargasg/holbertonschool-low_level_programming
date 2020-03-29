#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of parameters.
 * @argv: given arguments.
 *
 */

void main(int argc, char *argv[])
{
	int op_num, i = 0;
	char *mainptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	op_num = atoi(argv[1]);
	if (op_num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < op_num)
	{
		printf("%02hhx", mainptr[i++]);
		if (i < op_num)
			printf(" ");
	}
	printf("\n");
}
