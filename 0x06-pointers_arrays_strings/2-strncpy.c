#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: given number
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ia = 0;
	int ib = 0;

	while (ib < n && src[ib] != '\0')
	{
		dest[ia++] = src[ib++];
	}
	while (ia < n)
	dest[ia++] = '\0';

	return (dest);
}
