#include "main.h"

/**
 * _strcat - function that print on the standard output
 *
 * @dest: parameter to be entered
 * @src: parameter to be entered
 *
 * Return: 0 when successsfull
 */

char *_strcat(char *dest, char *src)
{
	int a;

	int b;

	a = 0;

	while (dest[a] != '\0')
		a++;
	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[a];
		a++;
		b++;
	}

}
