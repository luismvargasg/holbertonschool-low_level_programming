#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
