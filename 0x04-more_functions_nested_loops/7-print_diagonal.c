#include "main.h"

/**
* print_diagonal - Entry point
*
* @n: number of n to be printed
*
* Return: 0 (success)
*
*/
void print_diagonal(int n)
{
	int i;

	int k;

	if (n <= 0)
		_putchar('\n');


	for (i = 1; i <= n; i++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');

	_putchar('\\');
	_putchar('\n');
	}
	_putchar('\n');
}
