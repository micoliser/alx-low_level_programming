#include "main.h"

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		return (98);

	return (s);
}
