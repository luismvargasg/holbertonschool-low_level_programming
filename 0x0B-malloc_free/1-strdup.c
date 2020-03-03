#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: given string.
 *
 * Return: pointer or NULL if it's fail.
 */

char *_strdup(char *str)
{
	char *array;
	int strlen = 0;
	int i = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	array = malloc(sizeof(char) * strlen);

	if (array == NULL || str == NULL)
		return (NULL);

	while (i < strlen)
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
