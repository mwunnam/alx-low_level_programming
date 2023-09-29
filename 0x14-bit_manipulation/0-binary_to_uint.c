#include <stdio.h>

/**
* binary_to_uint - Function that convert binary to decimals
*
* @b: the binary to be converted
*
* Return: result when successful
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (b == NULL)
		return (0);


	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);


		result = (result << 1) | (*b - '0');
		b++;
	}
return (result);
}
