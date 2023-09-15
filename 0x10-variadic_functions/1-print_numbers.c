#include <stdio.h>
#include <stdarg.h>

/**
*  print_numbers - Function that print numbers
*
* @separator: string that separated the numbers
* @n: number of arguement passed
*
* Return: void
*/

void print_numbers(const char *separator,
		const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	num = 0;
	i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
