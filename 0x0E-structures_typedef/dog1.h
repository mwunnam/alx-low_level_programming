#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H


/**
 * struct dog - basic info of a do
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

/**
* dog_t - typedef for strut dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t* new_dog(char *name, float age, char *owner;)
/**
* void free_dog(dog_t *d);
* char *_strcpy(char *dest, char *src);
* int _strlen(char *s);
*/

#endif /* DOG_STRUCT_H */
