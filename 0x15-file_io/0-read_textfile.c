#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file to read.
 * @letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print || 0 if the
 * file can not be opened or read / filename == NULL / write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdb, fdc;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	fdb = read(fd, buf, letters);
	if (fdb < 0)
	{
		free(buf);
		return (0);
	}

	fdc = write(STDOUT_FILENO, buf, fdb);
	if (fdc == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fdc);
}
