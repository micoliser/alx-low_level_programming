#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i, len;

	len = strlen(s);
	i = 0;

	if (i == len)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	_puts_recursion(*s[i + 1]);
}
