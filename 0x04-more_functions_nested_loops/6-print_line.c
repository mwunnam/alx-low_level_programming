#include "main.h"

/**
* print_line - Entry point
*
* @n: number the _ should be printed
*
* Return: 0 (success)
*
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
		for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
