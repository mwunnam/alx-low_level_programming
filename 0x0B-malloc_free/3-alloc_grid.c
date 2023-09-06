#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - Entry point
*
* @width: the width fo the array
* @height: the hight of the arry
*
* Return: 0 (success)
*/

int **alloc_grid(int width, int height)
{
	int **ptrArray;
	int k, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);


	ptrArray = malloc(width * sizeof(int *));
		if (ptrArray == NULL)
			return (NULL);

	for (i = 0; i < width; i++)
	{
		ptrArray[i] = malloc(height * sizeof(int));
		if (ptrArray[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptrArray[j]);
			}
		free(ptrArray);
		return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (k = 0; k < height; k++)
		{
		ptrArray[i][k] = 0;
		}
	}
return (ptrArray);
}
