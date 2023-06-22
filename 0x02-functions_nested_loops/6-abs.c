#include "main.h"

/**
* _abs - Entry point
*
* @c: input to be changed
*
* Return: 0 (success)
*
*/
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
