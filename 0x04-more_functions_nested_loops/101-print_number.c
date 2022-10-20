#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m;
	

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else if (n == 0)
	{
		_putchar(48);
		return;
	}

	m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + 48);
}
