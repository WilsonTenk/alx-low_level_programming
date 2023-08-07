#include "main.h"

/**
 * create_file - file to be created
 * @filename: A pointer to de name of de file to be create
 * @text_content: pointer to a string to write to de file.
 *
 * Return: If the function fails then output -1
 *         Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(fd, text_content, len);

	if (fd == -1 || t == -1)
		return (-1);

	close(fd);

	return (1);
}
