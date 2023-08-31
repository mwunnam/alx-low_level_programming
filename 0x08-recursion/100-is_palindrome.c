#include <stdio.h>
#include "main.h"
/**
 * is_palindrome - Entry point
 *
 * @s: sting to be checked
 *
 * Return: 0 (success)
 *
 */


int is_palindrome(char *s)
{
	int lenght;

	lenght = _strlen_recursion(s);

	if (lenght == 0 || lenght == 1)
		return (1);

	return (palindrome_checker(s, 0, lenght - 1));

}


/**
 * palindrome_checker - checks for palidrome
 *
 * @s: string to be checked
 * @left: index of the first character
 * @right: index of the last character
 *
 * Return: 0 Always.
 */


int palindrome_checker(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	else if (s[left] == s[right])
	{
		return (palindrome_checker(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
	return (0);
}


/**
 * _strlen_recursion - Entry point
 *
 * @s: string to be counted
 *
 * Return: 0 (success)
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
	return (0);
}
