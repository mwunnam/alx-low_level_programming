#include <stdio.h>
#include "dog.h"

/**
 * free_dog - freeing dog_t
 *
 * @d: name of struct;
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
}
