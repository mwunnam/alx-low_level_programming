
#include "main.h"
/**
 * _memset -fills memory with values
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

