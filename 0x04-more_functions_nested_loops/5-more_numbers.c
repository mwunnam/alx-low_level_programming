#include "main.h"

/**
* more_numbers - Entry point
*
* Return: 0 (success)
*
*/
void more_numbers(void)
{
	int n;

	int i;

	for (n = 0; n < 10; n++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');

			_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
