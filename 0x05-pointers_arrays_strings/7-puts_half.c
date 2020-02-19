#include "holberton.h"

/**
 * puts_half - print the second half of a string.
 * @str: Given string
 * Return: always 0
 */

void puts_half(char *str)
{
	int lenght = 0, half = 0, cont = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 == 0)
		half = lenght / 2;

	else
		half = (lenght - 1) / 2;

	for (cont = half; cont < lenght; cont++)
	{
		_putchar(str[cont]);
	}
	_putchar('\n');
}
