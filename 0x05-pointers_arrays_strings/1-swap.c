#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: is the first parameter
 * @b: is the second parameter
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
