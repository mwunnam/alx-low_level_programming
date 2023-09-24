
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Entry point
*
* @separator: string for separating strings
* @n: Number of argument
*
* Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");

		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(args);
}