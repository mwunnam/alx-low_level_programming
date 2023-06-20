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

	char x;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			for (x = 'a'; x < 'g'; x++)
				putchar('0' + i + x - 10);
	}
	return (0);
}
