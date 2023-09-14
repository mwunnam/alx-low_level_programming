#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Function that sums all parameters
*
* @n: Number of argument passed
* @...: possible argument to be passed
*
* Return: 0 (success)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(numb, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(numb, int);

	va_end(numb);
return (sum);
}
