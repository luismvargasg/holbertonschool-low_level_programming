#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: given string
 * @accept: bytes to compare
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int ia = 0;
	int ib = 0;

	while ((s[ia] >= 'a' && s[ia] <= 'z') || (s[ia] >= 'A' && s[ia] <= 'Z'))
	{
		for (ib = 0; accept[ib] != '\0'; ib++)
		{
			if (s[ia] == accept[ib])
			{
				count = count + 1;
			}
		}
		ia++;
	}
	return (count);
}
