#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destiny
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ia = 0;
	unsigned int ib =0;

	while (ia < n)
	{
		dest[ia] = src[ib];
		ib++;
		ia++;
	}

	return (dest);
}
