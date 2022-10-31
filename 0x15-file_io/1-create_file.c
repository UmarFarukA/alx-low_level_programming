#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file
 * @text_content: Content to be written to
 * Return: 1 on success otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT);
	}
	else
	{
		len = 0;

		while (text_content[len] != '\0')
		{
			len += 1;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fd, text_content, len);
	if (fd == -1 || wt == -1)
		return (-1);
	close(fd);
	return (1);
}
