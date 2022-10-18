#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints a times table of given number
 * @i: the number to be printed
 *
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;

			printf("%d, ", k);
		}
		_putchar('\n');
	}
}
