#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _memset - set memory for an array with a character
 *
 * @s: pointer to be returnd
 * @b: character to be inputed
 * @n: ther size of the array
 *
 * Return: s when successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}


/**
* _calloc - Function that works like calloc
*
* @nmemb: number of element to be allocated
* @size: size in byte to be allocated
*
* Return: 0 (success)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size;

	total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, total_size);

return (ptr);
}
