#include <stdio.h>

/**
* set_bit - Function that insert 1 at an index
*
* @n: number of the
* @index: index to be inserted
*
* Return: 1 (success)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_number;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_number = 1UL << index;

	*n = *n | bit_number;

return (1);
}
