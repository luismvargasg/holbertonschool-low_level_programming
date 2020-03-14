#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n:number of integers passed to the function.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *res;

	va_start(ap, n);
	for (; i < n; i++)
	{
		res = va_arg(ap, char *);

		if (*res == '\0')
			printf("(nil)");
		else
			printf("%s", res);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		va_end(ap);
	}
	printf("\n");
}
