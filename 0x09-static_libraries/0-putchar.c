#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that print on the standard output
 *
 * @c: parameter to be entered
 *
 * Return: 0 when successsfull
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
