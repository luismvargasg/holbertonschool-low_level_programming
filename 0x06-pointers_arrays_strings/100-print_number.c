#include "holberton.h"
#include <limits.h>

/**
 * print_number - function that prints an integer.
 * @n: given number.
 */

void print_number(int n)
{
	int add = 0;

	if (n == INT_MIN )
	{
		n = n + 1;
		add = 1;
	}

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar (n % 10 + '0');

	if (add == 1)
		_putchar ('8');
}
