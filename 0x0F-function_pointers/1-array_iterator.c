#include "function_pointers.h"

/**
 * array_iterator - executes a particular function on all elements of an array
 * @array: the array
 * @size: size of the array
 * @action: the action to perform on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
