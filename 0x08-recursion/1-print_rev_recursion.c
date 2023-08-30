#include <stdio.h>
#include "main.h"



/**
* _print_rev_recursion - Entry point
*
* @s: string to be reversed
*
* Return: 0 (success)
*
*/


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
	
	return;

}
