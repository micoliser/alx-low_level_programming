#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to array or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		a[i] = malloc(size);

		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(arr);
		}
	}

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);
}
