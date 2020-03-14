#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char c, *s;
	float f;
	int i, ix = 0, sentinel = 0, flag = 0;

	va_start(ap, format);

	while (format[sentinel])
		sentinel++;

	while (format[ix])
	{
	switch (format[ix++])
	{
	case 'c':
		c = (char) va_arg(ap, int);
		printf("%c", c);
		break;
	case 'i':
		i = va_arg(ap, int);
		printf("%i", i);
		break;
	case 'f':
		f = (float) va_arg(ap, double);
		printf("%f", f);
		break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);
		break;
	default:
		flag = 1;
		break;
	}
	if (ix < sentinel && flag != 1)
		printf(", ");
	flag = 0;
	}
	va_end(ap);
	printf("\n");
}
