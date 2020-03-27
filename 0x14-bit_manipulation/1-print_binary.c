#include "holberton.h"

/**
 * print_recursion - function that prints the binary recursively.
 * @n: given number.
 *
 * Return: nothing.
 */

void print_recursion(unsigned long int n)
{
	if (n == 0)
		return;
	print_recursion(n >> 1);
	_putchar ((n & 1) + '0');
}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: given number.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
		print_recursion(n);
}
