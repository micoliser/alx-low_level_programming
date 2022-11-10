#include "main.h"

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	
	return (s);
}
