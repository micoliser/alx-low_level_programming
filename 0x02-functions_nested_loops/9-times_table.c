#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: returns nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			k = j * i
			_putchar(k + 48);

			if (j != '9')
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
