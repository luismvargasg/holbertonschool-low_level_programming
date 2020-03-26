#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 || b in NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
			number <<= 1;
			number += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (number);
}
