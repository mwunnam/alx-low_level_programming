#include "main.h"

/**
 * _sqrt_recursion - function that get the square
*                root of a given natural number.
*
*  pre_sqrt_recursion_func - function that helps the _sqrt_recursion function
*
*  @start: input parameter
*
*  @end: input parameter
*
*  Return: 0 Always
*
*/

int pre_sqrt_recursion_func(int n, int start, int end)
{
	int mid_num;
	int square;

	if (start > end)
		return (-1);

	mid_num = start + (end - start) / 2;

	square = mid_num * mid_num;

	if (square == n)
		return (mid_num);
	else if (square < n)
		return (pre_sqrt_recursion_func(n, mid_num + 1, end));
	else
		return (pre_sqrt_recursion_func(n, start, mid_num - 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (pre_sqrt_recursion_func(n, 0, n));
}
