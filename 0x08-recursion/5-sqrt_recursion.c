#include "holberton.h"

/**
 * test - function to test optional numbers.
 * @n: given number.
 * @x: variable number to test.
 * Return: natural square root number.
 */

int test(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x < n)
		return (test(n, x + 1));

	return (x);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Given number.
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	return (test(n, x));
}
