#include <stdio.h>
#include "main.h"

/**
* is_prime_number - Wrapper function for prime number check
*
* @n: Number to be evaluated
*
* Return: 1 if prime number and 0 if not prime number
*
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_Num_checker(n, n / 2, 2));
}


/**
 * prime_Num_checker - function that check for prime numbers
 *
 * @n: Number to be evaluated
 * @stop: mid poin of n
 * @i: The divisor
 *
 * Return: 1 if prime number and 0 if not prime number
 */

int prime_Num_checker(int n, int stop, int i)
{
	if (n % i == 0)
		return (0);

	if (i >= stop)
		return (1);
	else
		return (prime_Num_checker(n, n / 2, i + 1));
}
