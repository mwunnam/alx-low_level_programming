#include "main.h"

/**
 * _islower - function that print on the standard output
 *
 * @c: parameter to be entered
 *
 * Return: 0 when successsfull
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
