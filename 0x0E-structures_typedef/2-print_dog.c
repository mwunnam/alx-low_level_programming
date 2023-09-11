#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Function to print strcut dog
* @d: name of struct
*/


void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

}
