#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H


/**
 * struct dog - short description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Longer description
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_STRUCT_H */