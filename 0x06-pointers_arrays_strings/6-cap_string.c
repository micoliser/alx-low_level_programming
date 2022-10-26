#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to the string
 *
 * Return: the converted string
 */
char *cap_string(char *str)
{
	int i, len;
	char prev;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((prev < 'a' || prev > 'z') && (prev < 'A' || prev > 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}

		prev = str[i];
	}

	return (str);
}
