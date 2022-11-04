#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of argumnets
 *
 * Return: 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, amount, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			printf("%d\n", count);
		}
		else
		{
			while (amount != 0)
			{
				if (amount - 25 >= 0)
				{
					amount -= 25;
					count++;
				}
				else if (amount - 10 >= 0)
				{
					amount -= 10;
					count++;
				}
				else if (amount - 5 >= 0)
				{
					amount -= 5;
					count++;
				}
				else if (amount - 2 >= 0)
				{
					amount -= 2;
					count++;
				}
				else
				{
					amount -= 1;
					count++;
				}
			}
			printf("%d\n", count);
		}

		return (0);
	}
}

