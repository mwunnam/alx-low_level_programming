#include <stdio.h>
#include "main.h"
/**
* 
*/
void times_table(void);

void times_table(void)
{ 
	int i, k;

	for (i = 0; i <=9; i++)
	{	
		for (k = 0; k <= 9; k++)
		{
			int result;
			result = i * k;

			if (result < 10)
			{
				putchar(' ');
				putchar(result + '0');
			}
			else
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}
			

			if (k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('$');
		putchar('\n');
	}
}

int main()
{
	times_table(); 
	return (0);
	
}
