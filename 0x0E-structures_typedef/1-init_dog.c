#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* init_dog - Function that initializes a struct
*
* @name: name of dog
* @d: struct name
* @age: age of dog
* @owner: name of the dog's owner
*
* Return: d if successfull
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
