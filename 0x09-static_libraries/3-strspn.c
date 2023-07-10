#include "main.h"

/**
 * _strspn - function that print on the standard output
 *
 * @s: parameter to be inputed
 * @accept: parameter to be inputed
 *
 * Return: 0 when successsfull
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
	s++;
	}

}
