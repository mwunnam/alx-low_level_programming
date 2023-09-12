#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Function that free a struct
*
* @d: struct name
* Return: 0 (success)
*/


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
