#include <string.h>
#include "main.h"

/**
 * _strcpy - copies a string to anoder
 * @dest: first
 * @scr: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *v = strcpy(dest, src);

	return (*v);
}
