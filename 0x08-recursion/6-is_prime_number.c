#include "holberton.h"

/**
 * prime_test - Function that test if a number is prime.
 * @n: given number.
 * @x: given number (2) to run the test.
 *
 * Return: Result of the test
 */

int prime_test(int n, int x)
{
	if (n % x == 0 || n < 2)
		return (0);

	else if (n - 1 == x)
		return (1);

	else if (n > x)
		return (prime_test(n, x + 1));

	return (1);
}

/**
 * is_prime_number -  function that returns 1 if the input integer is a prime.
 * @n: given number.
 * Return: result.
 */

int is_prime_number(int n)
{
	int x = 2;

	return (prime_test(n, x));
}
