#include "main.h"

/**
* _isupper - Entry point
*
* @c: input to be evaluated
*
* Return: 0 if ture else 0
*
*/
int _isupper(int c)
{
	if (((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
