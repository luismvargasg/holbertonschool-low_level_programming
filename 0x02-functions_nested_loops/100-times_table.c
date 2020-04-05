#include "holberton.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: Given number.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int a, b, mult;

	if (n >= 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				mult = a * b;
				if (b == 0)
					_putchar('0');
				else if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult % 10 + '0');
				}
				else if (mult > 9 && mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
				}
				else if (mult > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(mult / 100 + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar(mult % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
