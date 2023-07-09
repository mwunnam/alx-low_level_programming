#include "main.h"

/**
 * _memcpy - function that print on the standard output
 *
 * @dest: parameter to be entered
 * @src: parameter to be entered
 * @n: parameter to be entered
 *
 * Return: 0 when successsfull
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	int i = n;

	for ( ; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
