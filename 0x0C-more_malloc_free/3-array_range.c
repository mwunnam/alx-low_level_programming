#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range - Entry point
* @min: min number for the range
* @max: max number for the range
*
* Return: ptrArray (success)
*
*/

int *array_range(int min, int max)
{
	int *ptrArray;
	int i, range_size;

	if (min > max)
		return (NULL);
	range_size = max - min + 1;

	ptrArray = malloc(sizeof(int) * range_size);
		if (ptrArray == NULL)
			return (NULL);
	for (i = 0; min <=  max; i++)
		ptrArray[i] = min++;
return (ptrArray);
}
