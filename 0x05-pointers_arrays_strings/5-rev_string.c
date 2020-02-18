#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - that reverses a string.
 * @s: Given string
 * Return: int
 */

void rev_string(char *s)
{
	int lenght = 0, aux, ini;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (ini = 0; ini <= lenght; ini++)
	{
		aux = s[ini];
		s[ini] = s[lenght - 1];
		s[lenght - 1] = aux;
		lenght--;
	}
}
