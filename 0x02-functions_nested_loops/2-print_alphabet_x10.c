#include "holberton.h"

/**
 * print_alphabet_x10 -  prints the alphabet, in lowercase ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int d = 0, c;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}

		_putchar('\n');
		d++;
	}
}
