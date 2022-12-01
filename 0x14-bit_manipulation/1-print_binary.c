#include "main.h"

/**
 * print-binary - prints a number in binary
 * @n: the integer
 *
 * Return: the number in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0, i = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i * 2 <= n)
		i *= 2;

	while (i != 0)
	{
		if ((num + i > n) || num == n)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
			num += i;
		}
		i = i >> 1;
	}
}
