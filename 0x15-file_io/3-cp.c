#include "main.h"

#define SIZE 1024

char *open_read_file(char *filename);
void open_write_file(char *filename, char *text);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = open_read_file(argv[1]);
	open_write_file(argv[2], buf);

	return (0);
}

/**
 * open_read_file - opens a file and read
 * @filename: name of file
 *
 * Return: pointer to buffer
 */
char *open_read_file(char *filename)
{
	int fd;
	char *buf;
	long int r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	buf = malloc(sizeof(char) * (SIZE + 1));
	if (!buf)
		return (NULL);
	r = read(fd, buf, SIZE);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	r = close(fd);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(99);
	}

	return (buf);
}

/**
 * open_write_file - opens a file and writes to it
 * @filename: the name of the file
 * @text: the text to write to the file
 *
 * Return: void
 */
void open_write_file(char *filename, char *text)
{
	int fd;
	long int r;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	r = write(fd, text, strlen(text));
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	r = close(fd);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(99);
	}
}
