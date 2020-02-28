#include "holberton.h"

/**
 * lenght - Function to know the lenght of the given string.
 * @s: given string.
 * Return: Lenght (position of the last char in the string)
 */

int lenght(char *s)
{
	if (*s)
		return (1 + lenght(s + 1));
	else
		return (0);
}

/**
 * aux_pal - Function that compare the first char with the last char, i vs len.
 * @s: Given string.
 * @i: First char of the string.
 * @len: Given lenght.
 * Return: If the string is a palindrome or not.
 */

int aux_pal(char *s, int i, int len)
{
	if (i > len)
		return (1);

	if (s[i] == s[len])
		return (aux_pal(s, i + 1, len - 1));

	else
		return (0);
}

/**
 * is_palindrome - function that returns 1 if a str is a palindrome or 0 if not
 * @s: string to test.
 * Return: 1 or 0;
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = lenght(s);

	return (aux_pal(s, i, len - 1));
}
