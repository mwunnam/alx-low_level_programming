#include <stdio.h>

/**
* flip_bits - Function that tell the number of filps to get a number
*
* @n: Number
* @m: Number
* Return: 0 (success)
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_var;
	unsigned int count;

	count = 0;

	xor_var = n ^ m;

	while (xor_var > 0)
	{
		count += xor_var & 1;
		xor_var >>= 1;
	}
return (count);
}
