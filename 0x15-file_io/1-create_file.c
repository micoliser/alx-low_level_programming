#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success and 0 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	long int r;

	r = strcmp(filename, "NULL");
	if (r == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	r = strcmp(text_content, "NULL");
	if (r != 0)
	{
		printf("Entered here\n");
		r = write(fd, text_content, strlen(text_content));
		if (r == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
