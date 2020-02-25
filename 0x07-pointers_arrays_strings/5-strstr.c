#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: given string
 * @needle: string to find inside haystack
 *
 * Return: null or string
 */

char *_strstr(char *haystack, char *needle)
{

	char *a = haystack;
	char *b = needle;

	for (;;)
	{
		if (*a++ != *b++)
		{
			a = ++haystack;
			b = needle;
		}

		if (!*b)
			return (haystack);

		if (!*a)
			return (0);
	}
}
