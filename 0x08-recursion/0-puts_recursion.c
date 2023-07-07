#include "main.h"

/**
 * _puts_recursion -  prints a string followed by a newline
 *
 * @s: parameter for hold string to be printed
 *
 * Return: 0 when successful
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);

_putchar('\n');
}
