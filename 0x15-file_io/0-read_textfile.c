#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Should read the text file print to STDOUT.
 * @filename: text file that is been been read
 * @letters: numb of char to be read
 * Return: w- the exact numb of bytes read & printed
 *        0 when function fails or name of file is NULL.
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
