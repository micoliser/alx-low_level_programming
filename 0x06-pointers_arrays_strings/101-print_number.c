#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n);
{
	unsigned int digit = 100000000;
	unsigned int num = n * 10;

	if (n == 0)
	{
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			num = -num;
		}
		while (digit > num)
			digit /= 10;
		while (digit /= 10)
			_putchar(((n / digit) % 10) + 48);
	}

	_putchar('\n');
}
