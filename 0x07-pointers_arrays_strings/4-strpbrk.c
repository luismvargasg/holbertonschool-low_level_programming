#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: given string
 * @c: character to find
 *
 * Return: Null or string.
 */

char *_strpbrk(char *s, char *accept)
{
	int ia = 0;
	int ib = 0;

	while (s[ia++])
	{
		for (ib = 0; accept[ib] != '\0'; ib++)
			if (s[ia] == accept[ib])
			{
				return (s + ia);
			}
		if (!*s)
			return (0);
	}
	return (0);
}
