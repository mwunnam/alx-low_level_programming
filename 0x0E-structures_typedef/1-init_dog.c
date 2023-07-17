#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog- function that initalizes struct dog
 *
 * @d: name of varialble
 * @name: name of dog
 * @age: age of dog
 * @owner: name of onwer
 *
 * Return: doginfo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
