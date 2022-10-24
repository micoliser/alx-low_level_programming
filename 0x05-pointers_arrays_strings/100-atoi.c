#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to the string
 *
 * Return: the integer
 */
void remove_char(char *str, char ch)
{
	int len, i, j;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ch)
		{
			for (j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;
		}
	}
}

int _atoi(char *s)
{
	int i, sign, len, val;

	len = strlen(s);
	sign = 1;

	for (i = 0; i < len; i++)
	{	
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}

	remove_char(s, "-");
	remove_char(s, "+");


	val = atoi(s);

	return (val * sign);
}
