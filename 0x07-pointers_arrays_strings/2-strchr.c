#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: given string
 * @c: character to find
 * Return: NULL or pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (0);
}
