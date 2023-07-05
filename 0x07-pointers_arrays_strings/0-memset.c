#include "main.h"
#include <stdio.h>

/**
 * _memset -  functon to set memory
 *
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 *
 * Return: s when successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
