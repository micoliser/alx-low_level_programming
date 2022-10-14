#include <stdio.h>

/**
 * main - prints out all alphabets in lowecase except q and e
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');

	return (0);
}
