#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space that contains a copy
 * of a string
 * @str: the string
 *
 * Return: NULL if string is NULL or if not enough space available and
 * a pointer to the new duplicate otherwise
 */
char *_strdup(char *str)
{
	int len, i;
	char *p;

	len = strlen(str);

	if (str == NULL)
		return (NULL);

	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	p[len] = '\0';

	return (p);
}
