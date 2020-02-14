#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143, fact = 2;

	while (num != 1)
	{
		if (num % fact == 0)
		{
			num = (num / fact);
		}
		else
			fact++;
	}
	printf("%li", fact);
	printf("\n");
	return (0);
}
