#include "main.h"

/**
 * _strstr - function that print on the standard output
 *
 * @needle: parameter to be inputed
 * @haystack: parameter to be inputed
 *
 * Return: 0 when successsfull
 */

char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
