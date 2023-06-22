#include "main.h"

/**
* _isalpha - Entry point
*
* @c: is the input to be checked
*
* Return: 1 if ture else 0
*
*/
int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
return (0);
}
