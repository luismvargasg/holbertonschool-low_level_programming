#include "holberton.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char buf[1024], er1[] = "Error: Can't read from file";
	char er2[] = "Error: Can't write to", er3[] = "Error: Can't close fd";
	int fd_to, fd_from, i = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", er1, argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", er2, argv[2]);
		exit(99);
	}
	while ((i = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "%s %s\n", er2, argv[2]);
			exit(99);
		}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", er1, argv[1]);
		exit(98);
	}
	if ((close(fd_from) == -1) || (close(fd_to) == -1))
	{
		dprintf(STDERR_FILENO, "%s %s\n", er3, argv[1]);
		exit(100);
	}
	return (0);
}
