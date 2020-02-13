#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int b = 0, c;

	while (b < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar (c / 10 + '0');
			}
			_putchar (c % 10 + '0');
			c++;
		}
	_putchar('\n');
	b++;
	}
}
