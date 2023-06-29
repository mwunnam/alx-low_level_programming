#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate strings
 *
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;

	}
	dest[i] = '\0';
	return (dest);
}
