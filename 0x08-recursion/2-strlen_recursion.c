#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a sting
 *
 * @s: parameter for hold string to evalute it lenght
 *
 * Return: 0 when successful
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
