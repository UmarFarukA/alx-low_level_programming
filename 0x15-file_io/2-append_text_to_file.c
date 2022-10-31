#include "main.h"

/**
 * append_text_to_file - Append text to file
 * @filename: Filename to which textcontent will be appended
 * @text_content: The text to append
 * Return: 11 on success otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wt = write(fd, text_content, len);
	if (fd == -1 || wt == -1)
		return (-1);
	close(fd);
	return (1);
}
