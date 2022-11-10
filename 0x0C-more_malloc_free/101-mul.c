#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successfull
 */
int main(int argc, char *argv[])
{
	unsigned long int res;

	int i, j, len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%ld\n", res);

	return (0);
}
