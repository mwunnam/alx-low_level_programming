#include "main.h"
#include <stdio.h>

/**
 * print_rev  -  Entry point
 *
 * @s: the string to be reversed
 *
 * Return: 0 Always
 */

void print_rev(char *s)
{
	int len;

	int i;


	len = 0;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
