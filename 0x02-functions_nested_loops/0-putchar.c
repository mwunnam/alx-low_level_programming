#include "main.h"

/**
* main - Entry point
*
* Return: 0 (success)
*
*/
int main(void)
{
	char *word = "_putchar";

	for (int i = 0; word[i] != '\0'; i++)
		_putchar(word[i]);

	_putchar('\n');
	return (0);
}
