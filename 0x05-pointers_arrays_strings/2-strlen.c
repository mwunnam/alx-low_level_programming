#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * @s: string to be checked
 *
 * Return: 0 Always
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
