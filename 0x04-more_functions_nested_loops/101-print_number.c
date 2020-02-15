#include "holberton.h"

/**
 * print_number - prints number.
 * @n : number
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar (45);
		_putchar (-n / 10 + '0');
		_putchar (-n % 10 + '0');
	}
	else if (n == 0)
	{
		_putchar ('0');
	}
	else if (n <= 99)
	{
		_putchar (n / 10 + '0');
		_putchar (n % 10 + '0');
	}
	else if (n <= 999)
	{
		int n2 = n / 10;

		_putchar (n / 100 + '0');
		_putchar (n2 % 10 + '0');
		_putchar (n % 10 + '0');
	}
	else if (n <= 9999)
	{
		int n3 = n / 100;
		int n4 = n / 10;

		_putchar (n / 1000 + '0');
		_putchar (n3 % 10 + '0');
		_putchar (n4 % 10 + '0');
		_putchar (n % 10 + '0');
	}
}
