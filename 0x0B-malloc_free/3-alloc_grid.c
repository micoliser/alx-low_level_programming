#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of a specified with and height
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL on failure or a pointer to the array otherwise
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc((width * height) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		a[i] = 0;

	return (a);
}
