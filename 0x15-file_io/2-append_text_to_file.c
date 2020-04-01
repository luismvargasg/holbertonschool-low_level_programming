#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure / if filename is NULL return -1.
 * 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdb, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == '\0')
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;

	fdb = write(fd, text_content, i);
	if (fdb == -1)
		return (-1);

	close(fd);
	return (1);
}
