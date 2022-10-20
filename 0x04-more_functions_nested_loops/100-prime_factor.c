#include <stdio.h>

/**
 * check_prime - checks for a prime number
 * @n: number to be checked
 *
 * Return: 1 if number is prime and 0 if not
 */
int check_prime(long int n)
{
	long int i, j;

	j = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			j++;
		}
	}

	if (j == 2)
		return (1);
	else
		return (0);
}

/**
 * main - checks prime factors of 612852475143 and
 * prints the largest;
 */
int main(void)
{
	long int num, a, largest;
	int result;

	num = 612852475143;

	for (a = 2; a <= num; a++)
	{
		if (num % a == 0)
		{
			result = check_prime(a);

			if (result == 1)
			{
				largest = a;
			}
		}
	}

	printf("%ld\n", largest);

	return (0);
}
