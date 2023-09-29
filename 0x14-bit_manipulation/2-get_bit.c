#include <stdio.h>
#include "main.h"
/**
* get_bit - Function get the the number at index
*
* @n: number to check
* @index: index to be gotten
* Return: index when successful
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_number;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_number = (n >> index) & 1;

return (bit_number);
}
