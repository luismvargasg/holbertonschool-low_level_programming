#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: Given string
 * Return: int
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
