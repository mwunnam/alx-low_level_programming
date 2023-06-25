#include "main.h"

/**
* print_triangle - Entry point
*
* @size: the size of the triangle
*
* Return: 0 (success)
*
*/
void print_triangle(int size)
{
	int i;

	int j;
	
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i + j <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
