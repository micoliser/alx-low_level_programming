#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings or NULL if error
 */
char **strtow(char *str)
{
	char **a, prev;
	int i, j, k, len, size, size2;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	len = strlen(str);
	prev = ' ';
	j = 0;
	k = 0;
	size = 0;
	size2 = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			k = 1;
		if (str[i] != ' ' && prev == ' ')
			size++;
		prev = str[i];
	}

	if (k == 0)
		return (NULL);

	a = malloc(size * sizeof(char *));

	prev = 'k';
	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] != ' ' && prev == ' ')
			{
				prev = 'k';
				break;
			}
			if (str[j] != ' ')
				size2++;
			prev = str[j];
			j++;
		}
		
		a[i] = malloc(size2 * sizeof(char));
		if (a[i] == NULL)
		{
			return (NULL);
		}
	}

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] != ' ' && prev == ' ')
			{
				prev = 'k';
				break;
			}
			if (str[j] != ' ')
			{
				a[i][k] = str[j];
				k++;
			}
			prev = str[j];
			j++;
		}
		a[i][k] = '\0';

		k = 0;
	}
	a[i] = NULL;

	return (a);
}

