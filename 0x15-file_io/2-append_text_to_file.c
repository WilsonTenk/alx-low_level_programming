#include "main.h"

/**
 * append_text_to_file - Should append text at de end of a file
 * @filename: A pointer to de name of de file
 * @text_content: The string to add to de end fil.
 *
 * Return: -1 if de function fails or filename is NULL
 *         If de file does not exist the user lacks write permissions -1
 *         Otherwise it should be 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	t = write(o, text_content, len);

	if (o == -1 || t == -1)
		return (-1);

	close(o);

	return (1);
}
