#include "lists.h"

/**
 * main - Program that finds the largest palindrome made from the product of
 * two 3-digit numbers, and prints to the standard output.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n1 = 999, n2 = 999, res = 0, temp = 0, a, b, c, d, e, f;

	while (1)
	{
		res = n1 * n2;
		a = res / 100000;
		b = (res / 10000) % 10;
		c = (res / 1000) % 10;
		d = (res / 100) % 10;
		e = (res / 10) % 10;
		f = res % 10;
		if (a == f && c == d && b == e)
		{
			if (res > temp)
				temp = res;
			n1--;
		}
		else
			n1--;
		if (n1 == 0)
		{
			n1 = 999;
			n2--;
		}
		if (n2 == 0)
		{
			printf("%d\n", temp);
			return (0);
		}
	}
	return (0);
}
