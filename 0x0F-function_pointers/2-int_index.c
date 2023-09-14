#include <stdio.h>

/**
* int_index - Entry point
*
* @array: array to be inputed
* @size: size of array
* @cmp: pointer to funciton
*
* Return: 1 if successful else -1
*
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
return (-1);
}
