#include "search_algos.h"

/**
 * print_array - Function that prints an array
 * @array - Array to be printed
 * Return: void
 */

void print_array(int *array)
{
	size_t size, i;

	size = 0;
	while (array[size] != '\0')
		size++;

	for (i = 0; i <= size; i++)
		if (i == size)
		{
			printf("%d\n", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
}
int main()
{
	int array[] = {1, 3, 4, 5, 6};
	print_array(array);
	return (0);
}
