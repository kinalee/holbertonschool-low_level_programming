#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: count of the arguments
 * @av: an array of pointers to the strings which are those arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int from, to, r, w, cf, ct;
	char context[1204];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	r = w = 1;

	while (r > 0)
	{
		r = read(from, context, 1204);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from files %s\n", av[1]);
			exit(98);
		}
		if (r > 0)
		{
			w = write(to, context, r);
			if (w == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	cf = close(from);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from), exit(100);
	ct = close(to);
	if (ct == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to), exit(100);
	return (0);
}
