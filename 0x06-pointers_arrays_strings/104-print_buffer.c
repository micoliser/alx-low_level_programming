#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i = i + 10)
		{
			printf("%08x:", i);
			
			for (j = i; k < i + 10; k++)
			{
				if (j + i >= size)
					printf(" ");
				if (j < size)
					printf("%02x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + 1));
			}
			printf("\n");
		}
	}
}
