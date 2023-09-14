#include <stdio.h>

/**
* array_iterator - function that print array
*
* @array: array
* @size: size of array
* @action: action to be done
*
* Return: Void
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
