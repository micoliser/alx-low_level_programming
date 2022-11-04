#include "main.h"
#include <unistd.h>
/**
 * _putchar - putschar
 * @c: character
 *
 * Return: nothing
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
