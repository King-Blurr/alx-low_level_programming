#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the filename
 * @text_content: the string to be ritten to the file
 * Return: return 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
