#include "holberton.h"

/**
 * puts_half - print the second half of a string.
 * @str: Given string
 * Retrun: always 0
 */

void puts_half(char *str)
{
	int lenght, half, c;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if ((lenght % 2) == 0)
		half = lenght / 2;
	else
		half = (lenght - 1) / 2;

	for (c = half; c < lenght; c++)
		_putchar(str[c]);

	_putchar('\n');
}
