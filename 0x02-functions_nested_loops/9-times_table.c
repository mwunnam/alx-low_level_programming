#include "main.h"

/**
* times_table - Entry point
*
* Return: 0 (success)
*
*/
void times_table(void)
{
	int col, row;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			int result;

			result = col * row;
			if (result < 10 )
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else if(result >= 10)
			{
				_putchar(' ');	
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(' ');
			}

		}
	_putchar('\n');
	}
}
