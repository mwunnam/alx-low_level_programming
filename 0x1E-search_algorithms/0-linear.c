#include "search_algos.h"

/**
 * linear_search - Function that searches with linear search
 * @array: The pointer to the array
 * @size: The size of the array
 * @value: The value to be search
 * Return: index of in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);

}
