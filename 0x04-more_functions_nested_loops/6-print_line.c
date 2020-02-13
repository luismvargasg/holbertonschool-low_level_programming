#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of loops
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	x = n;
	for (n = 0; n < x; n++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
