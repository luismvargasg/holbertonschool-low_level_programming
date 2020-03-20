#include <stdio.h>

void running_before_main(void) __attribute__ ((constructor));

/**
 * running_before_main - function that prints a message before
 * main function is executed.
 *
 * Return: nothing.
 */

void running_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
