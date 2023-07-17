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
	printf("Name: %s\n", d->name != NULL ? d->name : "(nill)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nill)");
}
