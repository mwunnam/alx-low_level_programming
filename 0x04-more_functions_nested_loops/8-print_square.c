#include "main.h"

/**
* print_square - Entry point
*
* @size: input for the number of the square
*
* Return: 0 (success)
*
*/
void print_square(int size)
{
	int i;

	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
}
