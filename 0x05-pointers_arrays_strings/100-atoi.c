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
	int i, j, sign, len, val;

	char a[20];
	j = 0;

	len = strlen(s);
	sign = 1;

	for (i = 0; i < len; i++)
	{	
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			a[j] = s[i];
			j++;
		}
	}


	val = atoi(a);

	return (val * sign);
}
