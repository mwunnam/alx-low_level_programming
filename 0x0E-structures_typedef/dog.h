#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include "dog.h"
/*
 * struct dog - infomation
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Long description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
