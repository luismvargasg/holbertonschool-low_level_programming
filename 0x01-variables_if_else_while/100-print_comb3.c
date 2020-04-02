#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1;

	while (n <=  89)
	{
		if ((n / 10 != n % 10) && n / 10 < n % 10)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < 89)
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
