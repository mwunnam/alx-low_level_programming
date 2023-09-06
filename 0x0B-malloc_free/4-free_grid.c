#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Function to free grid
*
* @grid: grid
* @height: the row of the grid
*
* Return: 0 (success)
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
