#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: given number.
 * @m: number to compare with.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, temp = (n ^ m);

	while (temp)
	{
		bits += temp & 1;
		temp >>= 1;
	}
	return (bits);
}
