#include "main.h"

/**
 * _strpbrk - function that print on the standard output
 *
 * @s: parameter to be inputed
 * @accept: parameter to be inputed
 *
 * Return: 0 when successsfull
 */

char *_strpbrk(char *s, char *accept)
{	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
			if (*s == accept[k])
			return (s);
	}
	return ('\0');
}
