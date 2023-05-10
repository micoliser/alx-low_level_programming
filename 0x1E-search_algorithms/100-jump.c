#include "search_algos.h"

/**
 * min - finds the smallest between two numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: the smallest
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * jump_search - searches for a value in an array using a
 * jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index if value is found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);

	if (!array)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[min(b, size)] < value)
	{
		a = b;
		b += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (a > size - 1)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	while (array[a] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		if (a > size - 1)
			break;
		a++;
	}
	return (-1);
}
