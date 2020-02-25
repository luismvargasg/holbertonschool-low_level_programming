#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: given array
 *
 */

void print_chessboard(char (*a)[8])
{
	int ia;
	int ib;

	for (ia = 0; ia < 8; ia++)
	{
		for (ib = 0; ib < 8; ib++)
		{
		_putchar (a[ia][ib]);
		}
		_putchar ('\n');
	}
}
