#include <stdio.h>
#include "main.h"


/**
* _puts-recursion - Entry point
*
* @s: string to be printed
*
* Return: 0 (success)
*
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
