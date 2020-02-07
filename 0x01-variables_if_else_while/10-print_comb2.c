#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 00;

	while (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n < 100)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
