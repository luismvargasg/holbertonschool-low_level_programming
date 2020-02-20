#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int temp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	temp = s1[i] - s2[i];

	return (temp);
}
