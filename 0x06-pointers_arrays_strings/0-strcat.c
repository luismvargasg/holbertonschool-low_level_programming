#include "holberton.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *strcat = dest;

	while ('\0' != *dest)
	{
		dest++;
	}

	while ('\0' != *src)
	{
	*dest++ = *src++;
	}

	*dest = '\0';

	return (strcat);
}
