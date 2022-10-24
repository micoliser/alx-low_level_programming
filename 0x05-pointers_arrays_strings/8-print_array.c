#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of items to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
