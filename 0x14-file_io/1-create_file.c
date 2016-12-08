#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, p;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	i = 0;

	if (text_content == NULL)
		return (-1);

	while (text_content[i] != '\0')
		++i;

	p = write(fd, text_content, i);

	if (p == -1)
		return (-1);

	close(fd);
	return (1);
}
