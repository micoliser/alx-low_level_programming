#include "main.h"

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else
	{
		return (s);
	}
}
