#include "holberton.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: given textfile
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	long fd, r, p;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);

	if (r == -1)
		return (0);

	p = write(1, buffer, r);

	if (p == -1)
		return (0);

	close(fd);
	return (p);
}
