#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @size: size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar ('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
		{
			_putchar (' ');
		}
		for (b = 1; b <= a; b++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
}
