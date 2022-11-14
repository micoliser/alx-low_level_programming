#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog greated or null if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *dog;

	dog = malloc(sizeof(dog));

	if (dog == NULL || !name || !owner)
	{
		free(dog);
		return (NULL);
	}

	name_len = strlen(name);
	owner_len = strlen(owner);

	dog->name = malloc(name_len + 1);
	dog->owner = malloc(owner_len + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
