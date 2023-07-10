#include "main.h"

/**
 * _atoi - function that print on the standard output
 *
 * @s: parameter to be entered
 *
 * Return: 0 when successsfull
 */

int _atoi(char *s)
{
	int sign;

	int i;

	unsigned int res;

	i = 0;

	sign = 1;

	res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
			i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;

	return (res);
}
