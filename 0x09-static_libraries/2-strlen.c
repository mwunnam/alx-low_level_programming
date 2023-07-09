#include "main.h"

/**
 * _strlen - function that print on the standard output
 *
 * @s: parameter to be entered
 *
 * Return: 0 when successsfull
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
