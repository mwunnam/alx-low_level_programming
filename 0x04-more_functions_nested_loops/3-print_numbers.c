#include "main.h"

/**
* print_numbers - Entry point
*
* Return: 0 (success)
*
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
