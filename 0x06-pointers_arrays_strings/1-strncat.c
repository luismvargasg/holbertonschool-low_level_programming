#include "holberton.h"

/**
 * _strncat - appends the n number of bytes of src string to the dest string
 * @dest: destination
 * @src: source
 * @n: given number
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return (dest);
}
