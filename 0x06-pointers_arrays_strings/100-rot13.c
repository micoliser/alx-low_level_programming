#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str - the string tobe encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = replace[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
