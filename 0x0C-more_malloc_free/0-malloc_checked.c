#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - Function that check memory allocated
*		and allocated memory
*
* @b: size to be inputed
*
* Return: ptr if successful else 98
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
