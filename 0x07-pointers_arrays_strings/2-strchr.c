#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: given string
 * @c: character to find
 *
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	char *p;

	while (*s++)
	{
		if (*s == c)
			p = s - 1;
	}
	return (p);
}
