#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: a function that creates a file.
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: -1 always
 */
int create_file(const char *filename, char *text_content)
{
	if (!filename)
	return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	ssize_t bytes_written = 0;

	if (text_content)
	{
	size_t len = 0;

	while (text_content[len])
		len++;
	bytes_written = write(fd, text_content, len);
	}

	if (bytes_written == -1)
	return (-1);

	close(fd);

	return (bytes_written);
}
