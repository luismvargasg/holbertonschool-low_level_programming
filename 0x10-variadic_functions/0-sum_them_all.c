#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Given numbers.
 *
 * Return: Result of the sum or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int res = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
		res += va_arg(ap, int);

	va_end(ap);
	return (res);
}
