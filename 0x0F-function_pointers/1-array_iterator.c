#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 * @array: Given array.
 * @size: size of the array.
 * @action: pointer to the function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (*action)
	{
		while (i < size && != NULL)
			(*action)(array[i++]);
	}
}
