#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Entry point
*
* @width: input of the row
* @height: input of the col
*
* Return: 0 (success)
*
*/

int **alloc_grid(int width, int height)
{
	int **ptrArray;
	int i, k;

	if (width == 0 || height == 0)
		return (NULL);

	ptrArray = malloc(sizeof(int *) * height);
	if (ptrArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptrArray[i] = malloc(sizeof(int) * width);

		if (ptrArray[i] == NULL)
		{
			for (; i >= 0; i--)
			free(ptrArray[i]);

		free(ptrArray);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			ptrArray[i][k] = 0;
	}
	return (ptrArray);
}
