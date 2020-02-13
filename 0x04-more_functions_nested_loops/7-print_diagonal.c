#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of loops
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar ('\n');

	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= i - 1; ++j)
		{
			_putchar (' ');
		}
		_putchar (92);
	_putchar ('\n');
	}
}
