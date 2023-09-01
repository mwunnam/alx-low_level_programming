#include <stdio.h>
#include "main.h"
/**
* square_root_checker - Checks for square root
*
* @n: Number to be evaluated
* @start: The begining of the range
* @end: The end of the range
*
* Return: mid if successful else -1
*
*/


int square_root_checker(int n, int start, int end)
{
	if (start <= end)
	{
		int mid, square;

		mid = (start + end) / 2;
		square = mid * mid;

		if (square == n)
			return (mid);

		else if (square < n)
			return (square_root_checker(n,
					mid + 1, end));

		else
			return (square_root_checker(n,
					mid, end - 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - wrapper function for the checker
 *
 * @n: Number to be evaluated
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (square_root_checker(n, 0, n));
}
