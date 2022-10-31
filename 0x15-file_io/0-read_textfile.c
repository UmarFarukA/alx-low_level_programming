#include "main.h"

/**
 * read_textfile - Read a text file
 * @filename: File to be read
 * @letters: Number of characters
 * Return: Number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wt;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);
	if (fd == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wt);
}
