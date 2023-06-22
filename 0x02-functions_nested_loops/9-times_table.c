#include "main.h"

/**
* times_table - Entry point
*
* Return: 0 (success)
*
*/
void times_table(void)
{
	int col;

	for (col = 0; col <= 9; col++)
	{
		int row;

		for (row = 0; row <= 9; row++)
		{
			int result;

			result = col * row;
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}