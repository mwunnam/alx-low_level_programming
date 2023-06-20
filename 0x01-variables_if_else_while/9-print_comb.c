#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (success)
*
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

			if (i < 10)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
