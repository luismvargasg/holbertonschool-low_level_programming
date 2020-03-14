#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, sentinel = 0, flag = 0;

	va_start(ap, format);
	while (format[sentinel])
		sentinel++;
	while (format[i])
	{
	switch (format[i++])
	{
	case 'c':
		printf("%c", va_arg(ap, int));
		break;
	case 'i':
		printf("%i", va_arg(ap, int));
		break;
	case 'f':
		printf("%f", va_arg(ap, double));
		break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", s);
		break;
	default:
		flag = 1;
		break;
	}
	if (i < sentinel && flag != 1)
		printf(", ");
	flag = 0;
	}
	va_end(ap);
	printf("\n");
}
