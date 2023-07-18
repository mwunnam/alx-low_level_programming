#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function prints the member of struct dog *d
 *
 * @d: the name of the struct variable
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
