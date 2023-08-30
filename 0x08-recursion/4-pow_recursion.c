#include <stdio.h>

/**
* _pow_recursion - Entry point
*
*@x: base input
*@y: suppercript input
*
* Return: 0 (success)
*
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else 
	{
		return (x * _pow_recursion(x, y - 1));
	}
return (0);
}
