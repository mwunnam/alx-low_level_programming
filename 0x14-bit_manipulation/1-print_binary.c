#include <stdio.h>
#include "main.h"

/**
* print_binary - Function that prints binary numbers
*
* @n: number to be printed in binary
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	int bit_pos;
	int bit_print;
	int bit;

	bit_print = 0;

	if (n == 0)
	{
		_putchar('0');
	/**	_putchar('\n'); */
		return;
	}

	bit_pos = sizeof(n) * 8 - 1;

	while (!((n >> bit_pos) & 1))
		bit_pos--;

	for (; bit_pos >= 0; bit_pos--)
	{
		bit = (n >> bit_pos) & 1;

		if (bit)
		{
			bit_print = 1;
			_putchar('1');
		}
		else if (bit_print)
		{
			_putchar('0');
		}
	}
/**	_putchar('\n'); */
}
