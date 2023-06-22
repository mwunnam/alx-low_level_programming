#include "main.h"

/**
* _isdigit - Entry point
*
* @c: input which will be evaluated
*
* Return: 1 if true else 0
*
*/
int _isdigit(int c)
{
	if (((c >= 0) || (c <= 9)))
		return (1);
	else
		return (0);
}
