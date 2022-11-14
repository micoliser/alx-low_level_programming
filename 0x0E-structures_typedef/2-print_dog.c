#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: a struct of the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!= NULL)
	{
		printf("Name: %s\n", d.name == NULL ? "(nil)" : d.name);
		printf("Age: %.6f\n", d.age == NULL ? "(nil)" : d.age);
		printf("Owner: %s\n", d.owner == NULL ? "(nil)" : d.owner);
	}
}
