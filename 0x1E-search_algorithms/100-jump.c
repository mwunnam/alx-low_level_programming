#include "search_algos.h"

/**
 * jump_search - Function that searches with jump algorithm
 * @array: Array to be printed
 * @size: The size of the array
 * @value: The value to be searched
 * Return: The index of the at where the value can be found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, R, L, m, j;

	m = sqrt(size);
	i = 0;
	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
		{
			L = (i >= m) ? (i - m) : 0;
			R = i;
/**			printf("Value found between indexes [%ld] and [%ld]\n", L, R); */
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i + m;
	}
	if (i >= size)
	{
		L = (size >= m) ? (size - m) : 0;
		R = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", L, R);
	for (j = L; j <= R; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}

	return (-1);
}
