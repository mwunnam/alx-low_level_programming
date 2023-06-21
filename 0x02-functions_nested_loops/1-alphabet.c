#include <stdio.h>

/**
* main - check the code
*
* Return: 0 (success)
*
*/
int main(void)
{
	/**
	 * print_alphabet - Entry point
	 *
	 * Retun: 0 (success)
	 *
	 */
	void print_alphabet(void)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			putchar(alphabet);

		putchar('\n');
	return;
	}
print_alphabet();
return (0);
}
