#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: given string
 * Return: encoden string
 */

char *rot13(char *s)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGIFJKLMnopqrstuvwxyzabcdefghijklm";
	int ia = 0;
	int ib = 0;

	while (s[ia])
	{
		for (ib = 0; str1[ib]; )
		{
			if (s[ia] == str1[ib])
			{
				s[ia] = str2[ib];
				ia++;
				ib = 0;
			}
			ib++;
		}
		ia++;
	}
	return (s);
}
