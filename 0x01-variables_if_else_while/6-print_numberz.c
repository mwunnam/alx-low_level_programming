#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (success)
*
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	putchar('\n');

	return (0);
}
