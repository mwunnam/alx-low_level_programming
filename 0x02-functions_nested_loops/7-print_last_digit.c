#include "main.h"

/**
* print_last_digit - Entry point
*
* @c: number to be checked
*
* Return: 0 (success)
*
*/

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

return (last_digit);
}
