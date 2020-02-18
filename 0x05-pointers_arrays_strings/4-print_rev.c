
#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: given string
 */

void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (lenght = lenght - 1; lenght >= 0; lenght--)
	{
		_putchar (s[lenght]);
	}
	_putchar ('\n');
}
