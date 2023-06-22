#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: symbol that will be checked
 *
 * Return: 0 (success)
 *
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);

	if (n == 0)
		_putchar('0');
	return (0);

	if (n < 0)
		_putchar('-');
	return (-1);
}