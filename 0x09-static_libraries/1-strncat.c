#include "main.h"

/**
 * _strncat - function that print on the standard output
 *
 * @dest: parameter to be entered
 * @src: parameter to be entered
 * @n: prameter to be entered
 *
 * Return: 0 when successsfull
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;

	int b;

	a = 0;

	while (dest[a] != '\0')
		a++
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
