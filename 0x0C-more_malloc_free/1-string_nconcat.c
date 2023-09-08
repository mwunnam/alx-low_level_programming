#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - Entry point
*
* @s1: string 1
* @s2: string 2
* @n: new string lenght
*
* Return: 0 (success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1, len2, i;
	unsigned int j;

	len1 = 0;
	len2 = 0;

/** Get the lenght of s1 and s2 */
	while (*s1 != '\0')
		len1++;

	while (*s2 != '\0')
		len2++;

/* Set n to len2 if n is greater than n */
	if (n >= len2)
		n = len2;

	/** Allcote memory for the new string */
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/** Copy s1 to prt */
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	/** Concatenate the first n character from s2 */
	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	/** Add the Null terminator */
	ptr[len1 + n] = '\0';

return (ptr);
}

