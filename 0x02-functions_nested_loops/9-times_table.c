#include "holberton.h"

/**
 * times_table - prints the nine 9 times table
 *
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, mult;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = (a * b);
			if (mult == 0)
			{
				_putchar ('0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
			else if (mult == 0)
			{
				_putchar (b);
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
			else if (mult > 9)
			{
				_putchar (mult / 10 + '0');
				_putchar (mult % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			else if (mult <= 9)
			{
				_putchar (mult % 10 + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
