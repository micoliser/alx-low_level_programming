#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reversion
 * @s: pointer to string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[len - 1]);

	s[len - 1] = '\0';

	_print_rev_recursion(&s);
}
