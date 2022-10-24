#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the  string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char newstr[20];

	len = strlen(s);
	i = len - 1;
	j = 0;

	while (i >= len)
	{
		newstr[j] = s[i];

		i--;
		j++;
	}

	s = newstr;
}
