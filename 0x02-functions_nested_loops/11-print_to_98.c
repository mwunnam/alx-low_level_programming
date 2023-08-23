#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: number to be inputed
 * Return: 0 (success)
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
