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

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
	*dest++ = *src++;
	}

	*dest = '\0';

	return (strcat);
}
