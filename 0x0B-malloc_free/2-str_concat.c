#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: null or pointer to the new concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int strlenA = 0, strlenB = 0, ia = 0, ib = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[strlenA] != '\0')
		strlenA++;

	if (s2 == NULL)
		s2 = "";

	while (s2[strlenB] != '\0')
		strlenB++;

	newstr = malloc(sizeof(char) * (strlenA + (strlenB + 1)));

	if (newstr != NULL)
	{
		while (ia < strlenA)
			newstr[i++] = s1[ia++];

		while (ib < strlenB)
			newstr[i++] = s2[ib++];

		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (NULL);
}
