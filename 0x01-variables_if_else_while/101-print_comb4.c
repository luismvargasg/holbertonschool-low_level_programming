#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, n = 1;

	while (n <= 789)
	{
		a = n / 100;
		b = (n / 10) % 10;
		c = n % 10;
		if (a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
