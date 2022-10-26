#include <string.h>
#include "main.h"

/**
 * infite add - add two numbere
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to where to store the result;
 * @size_r: size of r
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, num;
	int d[500];
	int rem = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + 1 >= size_r)
		return (0);

	j = len2 - 1;
	k = len1 - len2 - 1;

	for (i = len1 - 1; i > k; i--)
	{
		while (j >= 0)
		{
			num = rem + (n1[i] - 48) + (n2[j] - 48);

			if (num > 9)
			{
				num = num - 10;
				rem = 1;
			}
			else
			{
				rem = 0;
			}

			d[i] = num;
			j--;
			break;
		}
	}

	for (l = i; l >= 0; l--)
	{
		num = n1[l] - 48;

		if (rem == 1 && l == i)
			num = num + 1;

		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[l] = num;
	}

	if (rem == 1)
		d[0] += 10;

	i = 0;
	j = 0;

	if (d[0] > 9)
	{
		r[0] = 49;
		r[1] = (d[0] % 9) + 48;
		j = 2;
		i = 1;
	}

	while (i < len1)
	{
		r[j] = d[i] + 48;
		i++;
		j++;
	}

	return (r);
}
