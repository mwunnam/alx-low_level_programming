 #include "main.h"

/**
 * _strcmp - function that print on the standard output
 *
 * @s1: parameter to be inputed
 * @s2: parameter to be inputed
 *
 * Return: 0 when successsfull
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
return (0);
}
