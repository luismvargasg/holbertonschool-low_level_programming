#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destiny
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
