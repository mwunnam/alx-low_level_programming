#include "main.h"

/**
 * _print_rev_recursion - prints a string followed by a newline
 *
 * @s: parameter for hold string to be reversed
 *
 * Return: 0 when successful
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; 

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
