#include "main.h"

/**
 * read_textfile - Reads a text file printed to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read and printed
 * Return: number of letters it could read and print otherwise
 * 0 when filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
