#include "holberton.h"

/**
 * times_table - prints the nine 9 times table
 *
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, mult = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = a * b;
			if (b == 0)
				_putchar('0');
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult % 10 + '0');
			}
			else if (mult > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
