#include <stdio.h>
#include "maih.h"

/**
* is_digit - Entry point
*
* @s: string to be evaluated
*
* Return: 0 (success)
*/

int is_digit(char *s) 
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
