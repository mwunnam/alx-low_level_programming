#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array element on new line
 * @array: array
 * @size: the size of the array
 * @action: point to the funtion that print the array
 *
 * Return : 0
 *
 */



void array_iterator(int *array, size_t size,void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
