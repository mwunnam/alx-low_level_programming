#include "main.h"

/**
 * _strcpy - function that print on the standard output
 *
 * @dest: parameter to be inputed
 * @src: parameter to be inputed
 *
 * Return: 0 when successsfull
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	int b;

	a = 0;

	b = 0;

	while (*(src + a) != '\0')
		a++;

	for ( ; b < a; b++)
	dest[b] = src[b];


	dest[a] = '\0';

	return (dest);
}
