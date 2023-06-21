#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (success)
 *
 */


void print_alphabet_x10(void)
{
	int num;

	for (num = 1; num <= 10; num++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
