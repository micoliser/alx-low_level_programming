#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: the structure of a dog with dog name, age and age of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
