#include "search_algos.h"

/**
 * print_array - Function that prints an array
 * @array: Array to be printed
 * @L: Index of the left side of the array
 * @R: index of the right side of the array
 * Return: void
 */

void print_array(int *array, size_t L, size_t R)
{
	size_t i;

	printf("Searching in array: ");
	for (i = L; i <= R; i++)
	{
		printf("%d", array[i]);
		if (i < R)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Function that searches with binary search
 * @array: The pointer to the array
 * @size: The size of the array
 * @value: The value to be search
 * Return: index of in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L, R;
	int m;

	L = 0;
	R = size - 1;
	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		m = (L + R) / 2;
		print_array(array, L, R);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

