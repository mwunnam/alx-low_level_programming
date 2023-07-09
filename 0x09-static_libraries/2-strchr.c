#include "main.h"

/**
 * _strchr - function that print on the standard output
 *
 * @s: parameter to be entered
 * @c: parameter to be entered
 *
 * Return: 0 when successsfull
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for ( ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);

}
