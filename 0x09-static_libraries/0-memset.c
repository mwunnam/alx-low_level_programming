#include "main.h"

/**
 * _memset - function that print on the standard output
 *
 * @s: parameter to be entered
 * @b: parameter to be entered
 * @n: parameter to be entered
 *
 * Return: 0 when successsfull
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	for ( ; n > 0; a++)

	{
		s[a] = b;
		n--;
	}
	return (s);
}
