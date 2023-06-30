#include "main.h"
#include <stdio.h>

/**
 * _strcmp - comparing string values
 *
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: s[i] and s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[1])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
