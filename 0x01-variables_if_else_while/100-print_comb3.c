#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (success)
*
*/
int main(void)
{
	int num1;

	int num2;

	for (num1 = 0; num1 <= 4; num1++)
	{
		for (num2 = num1 + 1; num2 <= 5; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

			if (num1 < 4 || num2 < 5)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
