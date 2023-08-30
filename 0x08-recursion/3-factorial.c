#include <stdio.h>

/**
* factorial - Entry point
*
* @n: input to be evaluated
*
* Return: 0 (success)
*
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
return (0);
}
