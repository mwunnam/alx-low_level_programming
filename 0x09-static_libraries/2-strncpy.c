#include "main.h"

/**
 * _strncat - function that print on the standard output
 *
 * @dest: parameter to be entered
 * @src: parameter to be entered
 * @n: parameter to be entered
 *
 * Return: 0 when successsfull
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
