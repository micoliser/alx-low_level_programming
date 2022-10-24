#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to the string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, sign, len, val;

	len = strlen(s);
	sign = 1;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '+')
		{
			sign = sign * 1;
			memmove(&s[i], &s[i + 1], len - 1);
		}
		
		if (s[i] == '-')
		{
			sign = sign * -1;
			memmove(&s[i], &s[i + 1], len - 1);
		}
	}

	val = atoi(s);

	return (val * sign);
}
