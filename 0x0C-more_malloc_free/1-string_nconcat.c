#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @n: given number.
 * @s1: First string
 * @s2: String to concatenate on s1.
 * Return: pointer to the allocated memory or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int strlenA = 0, strlenB = 0, ia = 0, ib = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[strlenA] != '\0')
		strlenA++;

	if (s2 == NULL)
		s2 = "";

	while (s2[strlenB] != '\0')
		strlenB++;

	if (n > strlenB)
		n = strlenB;

	newstr = malloc(sizeof(char) * (strlenA + n + 1));

	if (newstr != NULL)
	{
		while (ia < strlenA)
			newstr[i++] = s1[ia++];

		while (ib < n)
			newstr[i++] = s2[ib++];
		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (NULL);
}
