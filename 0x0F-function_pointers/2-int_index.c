#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: size of array
 * @cmp: pointer to the compare function
 *
 * Return: index of the first element for which cmp does not
 * return 0 or -1 if no element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}

	return (-1);
}
